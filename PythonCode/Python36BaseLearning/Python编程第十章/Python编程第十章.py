# # 文件处理
# # 整个文件读取
# # 相对路径编写
# file_relative_path = 'text_files/pi_digits.txt'
#
# with open(file_relative_path) as file_object:  # as 后即为实例化
#     contents = file_object.read()
#     print(contents.rstrip())  # 是否加入.rstrip()感觉没区别
# # 绝对路径编写
# file_absolute_path = 'D:/StudyCode/GitHubCode/GitHubCode/PythonCode' \
#                      '/Python36BaseLearning/Python编程第十章/text_files/pi_digits' \
#                      '.txt '  # 文件路径都为'/' 而不是 '\'
# with open(file_absolute_path) as file_object:  # as 后即为实例化
#     contents = file_object.read()
#     print(contents.rstrip())
#############################################################################
# # 逐行读取
# filename = 'text_files/pi_digits.txt'
# with open(filename) as file_object:
#     for line in file_object :
#         # 每行读取后，会在尾部加入一个换行符，print也会加一个换行符，所以有空行
#         print(line.rstrip())
#############################################################################
# # open() 返回对象无法在with外使用，故要存成列表将数据拷出
# filename = 'text_files/pi_digits.txt'
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# for line in lines:
#     print(line.rstrip())
#############################################################################
# # 使用文件的内容
# filename = 'text_files/pi_digits.txt'
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# pi_string = ''
# for line in lines:
#     pi_string += line.rstrip()
#
# print(pi_string)
# print(len(pi_string))
#############################################################################
# # 处理大型文件
# filename = 'text_files/pi_million_digits.txt'
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# pi_string = ''
# for line in lines:
#     pi_string += line.strip()
#
# print(pi_string[:52] + '...')  # 保留50位小数
# print(len(pi_string))
#############################################################################
# # 你的生日是否在圆周率中？
# filename = 'text_files/pi_million_digits.txt'
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# pi_string = ''
# for line in lines:
#     pi_string += line.strip()
#
# birthday = input("请输入你的生日，看看你是不是个幸运儿：")
# if birthday in pi_string: # 好牛，直接可以查找数字是否在这个列表中
#     print("你的生日在圆周率中，好牛！")
# else:
#     print("你有点菜，生日都不在圆周率中！")
#############################################################################
# # 习题10-1
# print('习题10-1')
# filename = 'text_files/learning_python.txt'
# with open(filename) as file_object:
#     read_all_file = file_object.read()
#     print(read_all_file)
#
#     for line in file_object:
#         print(line)
#
#     read_all_lines = file_object.readlines()
# for read in read_all_lines:
#     print(read)
#############################################################################
# # 习题10-2
# print('习题10-2')
# filename = 'text_files/learning_python.txt'
# with open(filename) as file_object:
#     read_all_lines = file_object.readlines()
#
# read = ''
# for line in read_all_lines:
#     read += line
#
# print(read.replace("Python", 'C'))
#############################################################################
# # 写入文件
# filename = 'text_files/programming.txt'
#
# with open(filename,'w') as file_object:  # 写入文件 'w'
#     file_object.write('I love programming.')
#############################################################################
# # 写入多行文件
# filename = 'text_files/programming.txt'
#
# with open(filename,'w') as file_object:  # 写入文件 'w'
#     file_object.write('I love programming.\n')
#     file_object.write('I love creating new games.\n')
#############################################################################
# # 附加到文件
# filename = 'text_files/programming.txt'
#
# with open(filename,'a') as file_object:  # 写入文件 'w'
#     file_object.write('I also love finding meaning in large datasets.\n')
#     file_object.write('I love creating apps that can ran in a browser.\n')
#############################################################################
# # 习题10-3
# print('习题10-3')
# names = input("请输入你的名字：")
# filename = 'text_files/guest.txt'
# with open(filename,'w') as file_object:
#     file_object.write(names + '\n')
#############################################################################
# # 习题10-4
# print('习题10-4')
# filename = 'text_files/guest.txt'
# while True:
#     print("输入'q'退出！")
#     names = input('请输入您的名字：')
#     if names =='q':
#         break
#     print("欢迎"+names.title()+"来到我的聚会！")
#     with open(filename,'a') as file_object:
#         file_object.write(names + '\n')
#############################################################################
# # 习题10-5
# print('习题10-5')
# filename = 'text_files/guest.txt'
# while True:
#     print("输入'q'退出！")
#     answers = input('请问你为什么喜欢编程：')
#     if answers =='q':
#         break
#     with open(filename,'a') as file_object:
#         file_object.write(answers + '\n')
#############################################################################
# # 异常处理
# # 除零异常
# try:
#     print(10/0)
# except ZeroDivisionError:
#     print("你不能用一个数除以0！")
#############################################################################
# print("请输入两个数字，我将计算他们的商！")
# print('请输入q退出！')
# while True:
#     first_number = input("请输入第一个数：")
#     if first_number == 'q':
#         break
#     second_number = input("请输入第二个数：")
#     if second_number == 'q':
#         break
#     try:
#         answer = int(first_number) / int(second_number)
#     except (ZeroDivisionError or ArithmeticError):  # 全部错误都可以放在except中
#         print("被除数不能为零！")
#     else:
#         print(answer)
#############################################################################
# filename = 'text_files/alice.txt'
# try:
#     with open(filename) as f_obj:
#         contents = f_obj.read()
# except FileNotFoundError:
#     print("不好意思，这个文件" + filename + "不存在！")
# else:
#     # 计算文件大致包含多少个单词
#     words = contents.split()  # 分隔符
#     num_words = len(words)
#     print("这个文件" + filename + '有' + str(num_words) + '个单词！')
#############################################################################
# # 将其封装成方法，更容易调用
#
#
# def count_words(file_name):
#     """计算一个文件大概包含多少个单词"""
#     try:
#         with open(file_name) as f_obj:
#             contents = f_obj.read()
#     except FileNotFoundError:
#         pass  # 可替换为这个，直接什么都不显示，跳过！
#         print("不好意思，这个文件" + file_name + "不存在！")
#     else:
#         # 计算文件大致包含多少个单词
#         words = contents.split()  # 分隔符
#         num_words = len(words)
#         print("这个文件" + file_name + '有' + str(num_words) + '个单词！')
#
#
# # filename = 'text_files/alice.txt'
# # count_words(filename)
# filenames = ['text_files/alice.txt', 'text_files/pg68301.txt', 'text_files.txt']
# for filename in filenames:
#     count_words(filename)
#############################################################################
# # 习题10-6/10-7
# print("习题10-6/10-7")
# while True:
#     print('将两个数字求和')
#     print("输入q退出")
#     number = input("请输入第一个数字：")
#     if number == 'q':
#         break
#     try:
#         number_one = int(number)
#     except ValueError:
#         print('输入的不是数字！')
#     number = input("请输入第二个数字：")
#     if number == 'q':
#         break
#     try:
#         number_two = int(number)
#     except ValueError:
#         print('输入的不是数字！')
#     else:
#         print("两个数的和为：" + str(number_one + number_two) + "!")
#############################################################################
# # 习题10-8/10-9
# print("习题10-8/10-9")
#
#
# def show_file(filenames):
#     try:
#         with open(filenames) as f_obj:
#             contexts = f_obj.read()
#     except FileNotFoundError:
#         pass # 10-9
#         # print("这个文件" + filenames + "不存在！")  # 10-8
#     else:
#         print(contexts)
#
#
# filenames_cats = 'text_files/cats.txt'
# filenames_dogs = 'text_files/dogs.txt'
# filenames_error = 'dogs.txt'
# show_file(filenames_cats)
# show_file(filenames_dogs)
# show_file(filenames_error)
#############################################################################
# 习题10-10
print("习题10-10")


def statistics_characters(filename, character):
    try:
        with open(filename) as f_obj:
            contests = f_obj.read()
    except FileNotFoundError:
        pass
    else:
        numbers = contests.lower().split().count(character)
        return numbers


filenames = 'text_files/alice.txt'
char = 'it'
number = statistics_characters(filenames, char)
print("这本书有" + "'" + char + "'" + str(number) + "个！")
#############################################################################
# # 储存数据
# import json
#
# numbers = [2, 3, 5, 7, 11, 13]
# filename = 'json_files/number.json'
# with open(filename, 'w') as f_obj:
#     json.dump(numbers, f_obj)
#
# del numbers     #get到一个新技能，需要定时清除变量，否则电脑变得越来越慢！
#############################################################################
# import json
#
# filename = 'json_files/number.json'
# with open(filename) as f_obj:
#     numbers = json.load(f_obj)
#
# print(numbers)
#
# del numbers
#############################################################################
# #储存一个名字
# import json
#
# username = input("你的名字叫什么？")
# filename = 'json_files/username.json'
# with open(filename, 'w') as f_obj:
#     json.dump(username, f_obj)
#     print('我们记住了你的名字' + username + '!')
#
# del username, filename
#############################################################################
# import json
#
# filename = 'json_files/username.json'
# with open(filename) as f_obj:
#     username = json.load(f_obj)
#     print('我们记住了你的名字' + username + '!')
#
# del username, filename
#############################################################################
# import json
#
# # 如果以前储存了用户名，就加载它
# # 否则就提示用户输入用户名储存它
# from json import JSONDecodeError
#
# filename = 'json_files/username.json'
# try:
#     with open(filename) as f_obj:
#         username = json.load(f_obj)
# except FileNotFoundError:
#     usernames = input('请输入一个名字：')
#     with open(filename, 'w') as f_objs:
#         json.dump(usernames, f_objs)
#         print('我们欢迎' + usernames + '加入我们！')
# else:
#     print('我们欢迎' + username + '加入我们！')
#############################################################################
# # 将代码重构变得更加清晰明了
# import json
# def greet_user():
#     """问候用户，并指出其名字"""
#     filename = 'json_files/username.json'
#     try:
#         with open(filename) as f_obj:
#             username = json.load(f_obj)
#     except FileNotFoundError:
#         usernames = input('请输入一个名字：')
#         with open(filename, 'w') as f_objs:
#             json.dump(usernames, f_objs)
#             print('我们欢迎' + usernames + '加入我们！')
#     else:
#         print('欢迎老朋友' + username + '加入我们！')
# greet_user()
#############################################################################
# # 功能分块
# # 将代码重构变得更加清晰明了
# import json
#
# def get_stored_username():
#     """如果储存了用户名，就获取它"""
#     filename = 'json_files/username.json'
#     try:
#         with open(filename) as f_obj:
#             username = json.load(f_obj)
#     except FileNotFoundError:
#         return None
#     else:
#         return username
#
# def greet_user():
#     """问候用户，并指出其名字"""
#     username = get_stored_username()
#     if username:
#         print('欢迎老朋友' + username + '加入我们！')
#
#     else:
#         username = input("请输入你的名字：")
#         filename = 'json_files/username.json'
#         with open(filename, 'w') as f_obj:
#             json.dump(username, f_obj)
#             print('我们欢迎新朋友' + username + '加入我们！')
#
# greet_user()
#############################################################################
# import json
#
#
# def get_stored_username():
#     """如果储存了用户名，就获取它"""
#     filename = 'json_files/username.json'
#     try:
#         with open(filename) as f_obj:
#             username = json.load(f_obj)
#     except FileNotFoundError:
#         return None
#     else:
#         return username
#
#
# def greet_new_username():
#     username = input("请输入你的名字：")
#     filename = 'json_files/username.json'
#     with open(filename, 'w') as f_obj:
#         json.dump(username, f_obj)
#     return username
#
#
# def greet_user():
#     """问候用户，并指出其名字"""
#     username = get_stored_username()
#     if username:
#         print('欢迎老朋友' + username + '加入我们！')
#     else:
#         username = greet_new_username()
#         print('我们欢迎新朋友' + username + '加入我们！')
#
#
# greet_user()
#############################################################################
# # 习题10-11/10-12
# print('习题10-11/10-12')
# import json
#
#
# filename = 'json_files/like_unumber.json'
# try:
#     with open(filename) as f_obj:
#         like_number = json.load(f_obj)
# except FileNotFoundError:
#     like_number = input("请输入你喜欢的一个数字：")
#     with open(filename, 'w') as f_obj:
#         json.dump(like_number, f_obj)
#         print("已成功将你喜欢的输入储存到文件中！")
# else:
#     print('你最喜欢的数字是：' + like_number + '!')
#############################################################################
# # 习题10-13
# print('习题10-13')
# import json
#
#
# def get_stored_username():
#     """如果储存了用户名，就获取它"""
#     filename = 'json_files/username.json'
#     try:
#         with open(filename) as f_obj:
#             username = json.load(f_obj)
#     except FileNotFoundError:
#         return None
#     else:
#         return username
#
#
# def greet_new_username():
#     username = input("请输入你的名字：")
#     filename = 'json_files/username.json'
#     with open(filename, 'w') as f_obj:
#         json.dump(username, f_obj)
#     return username
#
#
# def greet_user():
#     """问候用户，并指出其名字"""
#     username = get_stored_username()
#     if username:
#         select = input("请问你是" + username + '吗？ 是/否')
#         if select == '是':
#             print('欢迎老朋友' + username + '加入我们！')
#         elif select == '否':
#             username = greet_new_username()  # 程序分块后，变得调用很方便！
#             print('我们欢迎新朋友' + username + '加入我们！')
#         else:
#             print('输入错误，程序结束！')
#     else:
#         username = greet_new_username()
#         print('我们欢迎新朋友' + username + '加入我们！')
#
#
# greet_user()
#############################################################################