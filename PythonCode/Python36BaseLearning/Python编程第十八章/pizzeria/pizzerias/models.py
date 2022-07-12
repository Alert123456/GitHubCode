from django.db import models

# Create your models here.
class Pizza(models.Model):
    """比萨的名字"""
    name = models.CharField(max_length=20)
    date_added = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        """返回模型的字符串表示"""
        return self.name


class Topping(models.Model):
    """学到的有关某个主题的具体知识"""
    # 将数据库中的主题与键相连
    pizza = models.ForeignKey(Pizza, on_delete=models.CASCADE)
    # 不需要长度限制的text
    name = models.TextField()
    # 能够按照创建顺序呈现条目，并放置时间戳
    date_added = models.DateTimeField(auto_now_add=True)

    # 储存管理模型的额外信息
    class Meta:
        verbose_name_plural = "names"

    def __str__(self):
        """返回模型的字符串表示"""
        # 习题18-2
        if len(self.name) > 50:
            char = '...'
        else:
            char = ''
        return self.name[:50] + char