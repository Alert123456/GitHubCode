import requests
import pygal
from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS

from operator import itemgetter

# 执行API调用并存储响应
url = 'https://hacker-news.firebaseio.com/v0/topstories.json'
r = requests.get(url)
print("Status code: ", r.status_code)

# 处理有关每篇文章的信息
submission_ids = r.json()
submission_dicts = []
for submission_id in submission_ids[:30]:
    # 对于每篇文章,都执行一个API调用
    url = ('https://hacker-news.firebaseio.com/v0/item/' + str(submission_id) +
           '.json')
    submission_r = requests.get(url)
    # print(submission_r.status_code)
    response_dict = submission_r.json()

    submission_dict = {
        'title': response_dict['title'],
        'link': 'http://news.ycombinator.com/item?id=' + str(submission_id),
        'comments': response_dict.get('descendants', 0),
    }
    submission_dicts.append(submission_dict)
# itemgetter('comments') 迭代器，提取出'comments'键所取出的值
submission_dicts = sorted(submission_dicts, key=itemgetter('comments'),
                          reverse=True)
plot_dicts, names = [], []
for submission_dict in submission_dicts:
    name = submission_dict['title']
    names.append(name)
    plot_dict = {
        'value': submission_dict['comments'],  # Bar的值
        # 键'label' 存储了项目描述
        'label': submission_dict['title'],
        # 键'xlink' 相关联的URL将每个条形都转换为活跃的链接
        'xlink': submission_dict['link'],
    }
    plot_dicts.append(plot_dict)
# 习题 17-2
# 可视化
my_style = LS("#333366", base_style=LCS)

# 改进Pygal，定制样式
my_config = pygal.Config()
my_config.x_label_rotation = 45
my_config.show_legend = False
my_config.title_font_size = 24
my_config.label_font_size = 14
my_config.major_label_font_size = 20
my_config.truncate_label = 15
my_config.show_y_guides = False
my_config.width = 1000

chart = pygal.Bar(my_config, style=my_style)
chart.title = "在GitHub上标星较多的JavaScrip程序"
chart.x_labels = names

chart.add('', plot_dicts)
chart.render_to_file("hn_submission.svg")