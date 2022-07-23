from django.urls import path
from . import views

urlpatterns = [
    path('', views.index, name='index'),
    # 创建所有主题的网页
    path('topics/', views.topics, name='topics'),
    # 创建特定主题的网页
    path('topics/(?p<topic_id>\d+)', views.topic, name='topic'),
    # 创建新博客的网页
    path('new_blog/', views.new_blog, name='new_blog'),
    # 创建新博客的网页
    path('edit_blog/(?p<blog_id>\d+)', views.edit_blog, name='edit_blog'),
]
