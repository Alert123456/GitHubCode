"""定义pizzeria的URL模式"""

from django.urls import path

from . import views

urlpatterns = [
    # 主页
    path('', views.notice, name='notice'),
    # 显示所有的主题
    path('pizza_topics/', views.pizza_topics, name='pizza_topics'),
    # 特定主题的详细页面
    path('pizza_topics/(?p<pizza_topic_id>\d+)/', views.pizza_topic,name='pizza_topic'),
]