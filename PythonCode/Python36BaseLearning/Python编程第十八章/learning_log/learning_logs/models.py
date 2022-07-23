from django.db import models
from django.contrib.auth.models import User

# Create your models here.
class Topic(models.Model):
    """用户学习的主题"""
    text = models.CharField(max_length=200)
    date_added = models.DateTimeField(auto_now_add=True)
    owner = models.ForeignKey(User, on_delete=models.CASCADE)  # 添加外键

    def __str__(self):
        """返回模型的字符串表示"""
        return self.text


class Entry(models.Model):
    """学到的有关某个主题的具体知识"""
    # 将数据库中的主题与键相连
    topic = models.ForeignKey(Topic, on_delete=models.CASCADE)
    # 不需要长度限制的text
    text = models.TextField()
    # 能够按照创建顺序呈现条目，并放置时间戳
    date_added = models.DateTimeField(auto_now_add=True)

    # 储存管理模型的额外信息
    class Meta:
        verbose_name_plural = "entries"

    def __str__(self):
        """返回模型的字符串表示"""
        # 习题18-2
        if len(self.text) > 50:
            char = '...'
        else:
            char = ''
        return self.text[:50] + char