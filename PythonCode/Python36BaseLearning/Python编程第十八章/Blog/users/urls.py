from django.urls import path
from django.contrib.auth.views import LoginView
from .import views
urlpatterns = [
    # 登录界面
    path('login/', LoginView.as_view(template_name='users/login.html'),
         name='login'),
    # 注销URL
    path('logout/', views.logout_view, name='logout'),
    # 注册界面
    path('register/', views.register, name='register'),
]