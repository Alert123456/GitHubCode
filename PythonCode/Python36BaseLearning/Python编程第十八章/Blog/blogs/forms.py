from django import forms

from .models import BlogPost

class TopicForm(forms.ModelForm):
    class Meta:
        model = BlogPost  # 根据哪个模型创建表单
        fields = ['title','text',]  # 表单包含text
        labels = {'title':'title',
                  'text': 'text'}  # 表单不生成标签
        widgets={'text':forms.Textarea({'cols':80})}