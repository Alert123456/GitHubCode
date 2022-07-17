from django.shortcuts import render

from .models import Pizza

# Create your views here.
def notice(request):
    return render(request, 'pizzerias/notice.html')

def pizza_topics(request):
    pizza_topics = Pizza.objects.order_by('date_added')
    context = {'pizza_topics':pizza_topics}
    return render(request, 'pizzerias/pizza_topics.html',context)

def pizza_topic(request, pizza_topic_id):  # 将获取的topic_id传入参数
    """显示单个主题及其所有的条目"""
    pizza_topic = Pizza.objects.get(id=pizza_topic_id)
    names = pizza_topic.topping_set.order_by('-date_added')  # 获取条目
    context = {'pizza_topic': pizza_topic, 'names': names}  # 传入字典
    return render(request, 'pizzerias/pizza_topic.html', context)  # 存入网页