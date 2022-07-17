from django import forms

from .models import Topic,Entry

class TopicForm(forms.ModelForm):
    class Meta:
        model = Topic  # 根据哪个模型创建表单
        fields = ['text']  # 表单包含text
        labels = {'text': ''}  # 表单不生成标签

class EntryForm(forms.ModelForm):
    class Meta:
        model = Entry
        fields = ['text']
        labels = {'text': ''}
        #定义属性widgets:小部件是HTML的表单元素，如单行文本框、多行文本框或下拉列表
        #使用forms.Textarea定制字段，将文本区域宽度设置为80列
        widgets = {'text': forms.Textarea(attrs={'cols': 80})}