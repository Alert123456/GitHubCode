from django.contrib import admin

# Register your models here.

# 必须这么调用，否者报错 Django
from learning_logs.models import Topic, Entry

admin.site.register(Topic)
admin.site.register(Entry)