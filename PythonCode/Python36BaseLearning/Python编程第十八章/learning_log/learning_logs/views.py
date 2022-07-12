from django.shortcuts import render

from .models import Topic

# Create your views here.
def index(request):
    """学习笔记的主页"""
    return render(request, 'learning_logs/index.html')

def topics(request):
    """显示所有的主题"""
    # 查询数据库请求提供Topic对象，按属性date_added进行排序
    topics = Topic.objects.order_by('date_added')
    # 定义要发送给模板的上下文，键为'topics'，值为topics
    context = {'topics':topics}
    return render(request, 'learning_logs/topics.html', context)