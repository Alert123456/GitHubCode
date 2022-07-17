from django.shortcuts import render
from django.http import HttpResponseRedirect
from django.urls import reverse

from .models import Topic, Entry
from .forms import TopicForm, EntryForm


# Create your views here.
def index(request):
    """学习笔记的主页"""
    return render(request, 'learning_logs/index.html')


def topics(request):
    """显示所有的主题"""
    # 查询数据库请求提供Topic对象，按属性date_added进行排序
    topics = Topic.objects.order_by('date_added')
    # 定义要发送给模板的上下文，键为'topics'，值为topics
    context = {'topics': topics}
    return render(request, 'learning_logs/topics.html', context)


def topic(request, topic_id):  # 将获取的topic_id传入参数
    """显示单个主题及其所有的条目"""
    topic = Topic.objects.get(id=topic_id)
    entries = topic.entry_set.order_by('-date_added')  # 获取条目
    context = {'topic': topic, 'entries': entries}  # 传入字典
    return render(request, 'learning_logs/topic.html', context)  # 存入网页


def new_topic(request):
    """添加新主题"""
    if request.method != 'POST':
        # 未提交数据：创建一个新表单
        form = TopicForm()  # 空表单
    else:
        # POST提交的数据，对数据进行处理
        form = TopicForm(request.POST)  # 用户输入数据，储存在request.POST中
        if form.is_valid():  # 无错误返回True  # 检查是否有效
            form.save()
            # 将用户重定向到网页topics
            return HttpResponseRedirect(reverse('learning_logs:topics'))
    context = {'form': form}
    return render(request, 'learning_logs/new_topic.html', context)


def new_entry(request, topic_id):
    """在特定的主题中添加新条目"""
    # topic_id可以知道针对那个主题进行处理
    topic = Topic.objects.get(id=topic_id)
    if request.method != 'POST':
        # 未提交数据：创建一个新表单
        form = EntryForm()  # 空表单
    else:
        # POST提交的数据，对数据进行处理
        form = EntryForm(data=request.POST)  # 用户输入数据，储存在request.POST中
        if form.is_valid():  # 无错误返回True  # 检查是否有效
            # commit=False 只储存到new_entry中，不储存到数据库
            new_entry = form.save(commit=False)
            new_entry.topic = topic
            new_entry.save()
            # 将用户重定向到网页topics
            return HttpResponseRedirect(reverse('learning_logs:topic',
                                                args=[topic_id]))
    context = {'topic': topic, 'form': form}
    return render(request, 'learning_logs/new_entry.html', context)


def edit_entry(request, entry_id):
    """编辑既有条目"""
    entry = Entry.objects.get(id=entry_id)
    topic = entry.topic

    if request.method != 'POST':
        # 初次请求,使用当前条目填充表单
        form = EntryForm(instance=entry)
    else:
        # POST提交的数据,对数据进行处理
        form = EntryForm(instance=entry, data=request.POST)
        if form.is_valid():
            form.save()
            return HttpResponseRedirect(reverse('learning_logs:topic',
                                                args=[topic.id]))
    context = {'entry': entry, 'topic': topic, 'form': form}
    return render(request, 'learning_logs/edit_entry.html', context)
