from django.shortcuts import render, get_object_or_404
from django.http import HttpResponseRedirect, Http404
from django.urls import reverse
from django.contrib.auth.decorators import login_required

from .models import BlogPost
from .forms import TopicForm


# Create your views here.

def index(request):
    return render(request, 'blogs/index.html')

def check_owner_topic(request, topic):
    # 确认请求的主题属于当前用户,不是则返回404错误
    if topic.owner != request.user:
        raise Http404

def topics(request):
    """显示所有主题"""
    topics = BlogPost.objects.order_by('date_added')
    context = {'topics': topics}
    return render(request, 'blogs/topics.html', context)


def topic(request, topic_id):
    """显示单个主题与帖子"""
    topic = BlogPost.objects.get(id=topic_id)
    context = {'topic': topic}  # 传入字典
    return render(request, 'blogs/topic.html', context)  # 存入网页


@login_required
def new_blog(request):
    """添加新博客"""
    if request.method != 'POST':
        # 未提交数据：创建一个新表单
        form = TopicForm()  # 空表单
    else:
        # POST提交的数据，对数据进行处理
        form = TopicForm(request.POST)  # 用户输入数据，储存在request.POST中
        if form.is_valid():  # 无错误返回True  # 检查是否有效
            new_blog = form.save(commit=False)
            new_blog.owner = request.user
            new_blog.save()

            # 将用户重定向到网页topics
            return HttpResponseRedirect(reverse('blogs:topics'))
    context = {'form': form}
    return render(request, 'blogs/new_blog.html', context)


@login_required
def edit_blog(request, blog_id):
    """编辑已有的帖子"""
    blog = BlogPost.objects.get(id=blog_id)
    check_owner_topic(request, blog)
    if request.method != 'POST':
        # 初次请求,使用当前条目填充表单
        form = TopicForm(instance=blog)
    else:
        # POST提交的数据,对数据进行处理
        form = TopicForm(instance=blog, data=request.POST)
        if form.is_valid():
            edit_blog = form.save(commit=False)
            edit_blog.owner = request.user
            edit_blog.save()
            return HttpResponseRedirect(reverse('blogs:topics'))
    context = {'blog': blog, 'form': form}
    return render(request, 'blogs/edit_blog.html', context)
