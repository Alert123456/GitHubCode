import requests

# 执行API调用并储存响应
url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
r = requests.get(url)
print("Status code: ", r.status_code)  # r.status_code 是否请求成功

# 将API响应储存在一个变量中
response_dict = r.json()  # 将获得的数据储存到json中，赋给response_dict

# 处理结果
print(response_dict.keys())
print(response_dict)
