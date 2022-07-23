from django.db import models
from django.contrib.auth.models import User
# Create your models here.

class BlogPost(models.Model):
    """博客的基础操作"""
    # 限定标题长度200字符
    title = models.CharField(max_length=200)
    # 不限制内容长度
    text = models.TextField()
    # 时间戳
    date_added = models.DateTimeField(auto_now_add=True)
    # 添加用户
    owner = models.ForeignKey(User, on_delete=models.CASCADE)

    def __str__(self):
        """返回模型的字符串表示"""
        return self.title
