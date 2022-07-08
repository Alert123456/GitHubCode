# # 获得全名
# def get_formatted_name(first, last, middle=''):
#     """获得一个完整的名字"""
#     if middle:
#         full_name = first + ' ' + middle + ' ' + last
#     else:
#         full_name = first + ' ' + last
#     return full_name.title()
##############################################################################
# # 习题11-1/11-2
# def get_city_country_name(city, country, population=''):
#     if population:
#         city_country_name = city + ', ' + country + ' - population ' \
#                             + population
#     else:
#         city_country_name = city + ', ' + country
#     return city_country_name.title()
##############################################################################
# class AnonymousSurvey():
#     """收集匿名调查问卷的答案"""
#     def __init__(self, question):
#         """储存一个问题，并为储存答案做准备"""
#         self.question = question
#         self.responses = []
#
#     def show_question(self):
#         """显示调查问卷"""
#         print(self.question)
#
#     def store_response(self, new_response):
#         """储存单份调查问卷"""
#         self.responses.append(new_response)
#
#     def show_results(self):
#         """显示收集到的所有答卷"""
#         print("收集结果：")
#         for response in self.responses:
#             print('- ' + response)

##############################################################################
# # 定义一个问题，并创建一个表示调查的对象
# questions = "你第一个会说的语言是什么？"
# my_survey = AnonymousSurvey(questions)
#
# # 显示问题并储存答案
# my_survey.show_question()
# print('按q退出程序！')
# while True:
#     responses = input('Language:')
#     if responses == "q":
#         break
#     my_survey.store_response(responses)
#
# #显示调查结果
# print("谢谢你们的配合！")
# my_survey.show_results()
##############################################################################
# # 习题11-3
# print("习题11-3")
#
#
# class Employee():
#
#     def __init__(self, firstname, lastname, money):
#         self.firstname = firstname
#         self.lastname = lastname
#         self.money = money
#
#     def give_raise(self, increase=5000):
#         return self.money + increase
