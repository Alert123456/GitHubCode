# import requests
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
#
# # 处理结果
# print(response_dict.keys())
# print(response_dict)
###############################################################################
# import requests
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
# print("Repositories returned: ", len(repo_dicts))
#
# # 研究第一个仓库
# repo_dicts = repo_dicts[0]
# print('\nKeys: ', len(repo_dicts))
# for key in sorted(repo_dicts.keys()):
#     print(key)
###############################################################################
# import requests
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
# print("Repositories returned: ", len(repo_dicts))
#
# # 研究第一个仓库
# repo_dicts = repo_dicts[0]
#
# print("\n在第一个库中查找一些信息: ")
# print("name: ", repo_dicts['name'])
# print("full_name: ", repo_dicts['full_name'])
# print("owner: ", repo_dicts['owner']['login'])
# print("html_url: ", repo_dicts['html_url'])
# print("Stars: ", repo_dicts['stargazers_count'])
# print("language: ", repo_dicts['language'])
# print("forks_count: ", repo_dicts['forks_count'])
# print("license: ", repo_dicts['license']['name'])
###############################################################################
# import requests
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
# print("Repositories returned: ", len(repo_dicts))
#
# print("\n在库中查找一些信息: ")
# for repo_dict in repo_dicts:
#     print("\nname: ", repo_dict['name'])
#     print("owner: ", repo_dict['owner']['login'])
#     print("Stars: ", repo_dict['stargazers_count'])
#     print("Repository: ", repo_dict['html_url'])
#     print("Description: ", repo_dict['description'])
###############################################################################
# import requests
# import pygal
# from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
#
# names, stars = [], []
# for repo_dict in repo_dicts:
#     names.append(repo_dict['name'])
#     stars.append(repo_dict['stargazers_count'])
#
# # 可视化
# my_style = LS("#333366", base_style=LCS)
# chart = pygal.Bar(style=my_style, x_label_rotation=45, show_legend=False)
# chart.title = "在GitHub上标星较多的Python程序"
# chart.x_labels = names
#
# chart.add('', stars)
# chart.render_to_file("python_repos.svg")
# ###############################################################################
# import requests
# import pygal
# from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
#
# names, stars = [], []
# for repo_dict in repo_dicts:
#     names.append(repo_dict['name'])
#     stars.append(repo_dict['stargazers_count'])
#
# # 可视化
# my_style = LS("#333366", base_style=LCS)
#
# # 改进Pygal，定制样式
# my_config = pygal.Config()
# my_config.x_label_rotation = 45
# my_config.show_legend = False
# my_config.title_font_size = 24
# my_config.label_font_size = 14
# my_config.major_label_font_size = 20
# my_config.truncate_label = 15
# my_config.show_y_guides = False
# my_config.width = 1000
#
# chart = pygal.Bar(my_config, style=my_style)
# chart.title = "在GitHub上标星较多的Python程序"
# chart.x_labels = names
#
# chart.add('', stars)
# chart.render_to_file("python_repos.svg")
# ###############################################################################
# # 加入自定义标签
# import requests
# import pygal
# from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS
#
# # 执行API调用并储存响应
# url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
# r = requests.get(url)
# print("Status code: ", r.status_code)  # r.status_code 是否请求成功
#
# # 将API响应储存在一个变量中
# response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
# print("Total repositories: ", response_dict["total_count"])
#
# # 探索有关仓库的信息
# repo_dicts = response_dict["items"]
#
# names, plot_dicts = [], []
# for repo_dict in repo_dicts:
#     names.append(repo_dict['name'])
#     plot_dict = {
#         'value': repo_dict["stargazers_count"],  # Bar的值
#         # 键'label' 存储了项目描述
#         'label': repo_dict["description"],
#         # 键'xlink' 相关联的URL将每个条形都转换为活跃的链接
#         'xlink': repo_dict["html_url"],
#     }
#     plot_dicts.append(plot_dict)
#
# # 可视化
# my_style = LS("#333366", base_style=LCS)
#
# # 改进Pygal，定制样式
# my_config = pygal.Config()
# my_config.x_label_rotation = 45
# my_config.show_legend = False
# my_config.title_font_size = 24
# my_config.label_font_size = 14
# my_config.major_label_font_size = 20
# my_config.truncate_label = 15
# my_config.show_y_guides = False
# my_config.width = 1000
#
# chart = pygal.Bar(my_config, style=my_style)
# chart.title = "在GitHub上标星较多的Python程序"
# chart.x_labels = names
#
# chart.add('', plot_dicts)
# chart.render_to_file("python_repos.svg")
###############################################################################
def get_status_code(url):
    r = requests.get(url)
    print("Status code: ", r.status_code)  # r.status_code 是否请求成功

# 习题17-1
# 加入自定义标签
import requests
import pygal
from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS

# 执行API调用并储存响应
url = 'https://api.github.com/search/repositories?q=language:java&sort=stars'
r = requests.get(url)
print("Status code: ", r.status_code)  # r.status_code 是否请求成功

# 将API响应储存在一个变量中
response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict
print("Total repositories: ", response_dict["total_count"])

# 探索有关仓库的信息
repo_dicts = response_dict["items"]

names, plot_dicts = [], []
for repo_dict in repo_dicts:
    names.append(repo_dict['name'])
    plot_dict = {
        'value': repo_dict["stargazers_count"],  # Bar的值
        # 键'label' 存储了项目描述
        'label': repo_dict["description"],
        # 键'xlink' 相关联的URL将每个条形都转换为活跃的链接
        'xlink': repo_dict["html_url"],
    }
    plot_dicts.append(plot_dict)

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
chart.render_to_file("JavaScrip_repos.svg")