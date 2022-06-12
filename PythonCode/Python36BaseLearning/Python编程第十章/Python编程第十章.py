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
# 习题10-5
print('习题10-5')
filename = 'text_files/guest.txt'
while True:
    print("输入'q'退出！")
    answers = input('请问你为什么喜欢编程：')
    if answers =='q':
        break
    with open(filename,'a') as file_object:
        file_object.write(answers + '\n')