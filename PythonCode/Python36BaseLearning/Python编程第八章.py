# 定义函数
##############################################################
# def greet_user():
#     """显示简单的问候语"""
#     print('Hello!')
##############################################################
# def greet_user(username):
#     """显示简单的问候语"""
#     print('Hello, ' + username.title() + '!')
#
#
# greet_user('jesse')
##############################################################
# # 习题8-1
# def display_message():
#     print("我在本章学的是函数！")
#
#
# display_message()
##############################################################
# def favorite_book(title):
#     print("我最喜欢的一本书是：" + title.title())
#
#
# favorite_book('狂人日记')
##############################################################
# # 传递实参
# def describe_pet(animal_type,pet_name):
#     """显示宠物的信息"""
#     print('\nI have a ' + animal_type + '.')
#     print('My ' + animal_type + 'is name is ' + pet_name.title() + '.')
#
#
# describe_pet('hamster','harry')
# describe_pet('dog', 'willie')
##############################################################
# def describe_pet(animal_type,pet_name):
#     """显示宠物的信息"""
#     print('\nI have a ' + animal_type + '.')
#     print('My ' + animal_type + 'is name is ' + pet_name.title() + '.')
#
#
# describe_pet(animal_type='hamster',pet_name='harry')
##############################################################
# def describe_pet(pet_name, animal_type = 'dog'):
#     """显示宠物的信息"""
#     print('\nI have a ' + animal_type + '.')
#     print('My ' + animal_type + "'s name is " + pet_name.title() + '.')
#
#
# describe_pet(pet_name='harry')
# describe_pet('willie')
##############################################################
# #习题8-3
# print('\n习题8-3')
# def make_shirt(size,fonts_style):
#     print("这件衣服的尺码是：" + str(size) +',需要在衣服上印的字是：' + fonts_style)
#
#
# make_shirt(38,'我爱你！')
# make_shirt(size=38,fonts_style='我爱你！')
##############################################################
# #习题8-4
# print('\n习题8-4')
# def make_shirt(size,fonts_style='I love Python编程第十一章'):
#     print("这件衣服的尺码是：" + str(size) +',需要在衣服上印的字是：' + fonts_style)
#
#
# make_shirt(38)
# make_shirt(36)
# make_shirt(40)
##############################################################
#
# # 习题8-5
# print('\n习题8-5')
#
#
# def describe_city(name, country="Chian"):
#     print(name + " is in " + country)
#
#
# describe_city("Harbin")
# describe_city("Qingdao")
# describe_city("USA", "American")
##############################################################
# def get_formatted_name(first_name, last_name):
#     '''返回整洁的姓名'''
#     full_name = 'Hi, ' + first_name + ' ' + last_name
#     return full_name.title()
#
#
# musician = get_formatted_name('jimi', 'hendrix')
# print(musician)
##############################################################
# def get_formatted_name(first_name, last_name, middle_name = ''):
#     '''返回整洁的姓名'''
#     full_name = first_name + ' ' + middle_name + ' ' + last_name
#     return full_name.title()
#
#
# musician = get_formatted_name('john', 'lee', 'hooker')
# print(musician)
# musician = get_formatted_name('jimi', 'hendrix')
# print(musician)
##############################################################
# def bulid_person(first_name, last_name, age = ''):
#     '''返回一个字典，其中包含有关一个人的信息'''
#     person = {'first': first_name, 'last':last_name}
#     if age:
#         person['age'] = age
#     return person
#
# musician = bulid_person('jimi', 'hendrix', age= 27)
# print(musician)
##############################################################
# def get_formatted_name(first_name, last_name):
#     '''返回整洁的姓名'''
#     full_name = first_name + ' ' + last_name
#     return full_name.title()
#
# #这是一个无限循环！
# while True:
#
#     print('\nPlease tell me your name:')
#     print('如需退出请打印"q"！')
#     f_name = input("First name: ")
#     if f_name == 'q':
#         break
#     l_name = input("Last name: ")
#     if l_name == 'q':
#         break
#     formatted_name = get_formatted_name(f_name, l_name)
#     print('\nHello, ' + formatted_name + '!')
##############################################################
# # 习题8-6
# print('\n习题8-6')
#
#
# def city_country(cityName, country):
#     country = cityName.title() + ', ' + country.title()
#     return country
#
#
# city = city_country('harbin', 'china')
# print(city)
##############################################################
# # 习题8-7/8-8
# print('\n习题8-7/8-8')
#
#
# def make_album(name, album, number = ''):
#     album_lib = {'album_name': name, 'album': album}
#     if number:
#         album_lib['number'] = number
#     return album_lib
#
#
# while True:
#     print("请输入专辑歌手和名称： ")
#     print('按q键退出！')
#     album_name = input("请输入专辑歌手: ")
#     if album_name == 'q':
#         break
#     album = input("请输入专辑名称: ")
#     if album == 'q':
#         break
#     album_lib = make_album(album_name, album)
#     print(album_lib)
##############################################################
# def greet_users(names):
#     """向列表中的每位用户都发出简单的问候"""
#     for name in names:
#         msg = 'Hello, ' + name.title() + '.'
#         print(msg)
#
#
# usernames = ['hannah', 'ty', 'margot']
# greet_users(usernames)
##############################################################
# def print_models(unprinted_designs, completed_models):
# # 模拟打印每个设计，直到没有未打印的设计为止
# # 打印每个设计后，都将其移到列表completed_models中
#     while  unprinted_designs:
#         current_design = unprinted_designs.pop()
#
#         #模拟根据设计制作3D打印模型的过程
#         print('Printing model: ' + current_design)
#         completed_models.append(current_design)


# def show_completed_models(completed_models):
# #显示好打印的所有模型
#     print('\n打印好的所有模型: ')
#     for completed_model in completed_models:
#         print(completed_model)
#
#
#
# #首先创建一个列表，其中包含一些要打印的设计
# unprinted_designs = ['iphone case', 'robot pendant',"dodecahedron"]
# completed_models = []
# print_models(unprinted_designs[:], completed_models)
# show_completed_models(completed_models)
##############################################################
# # 习题8-9/8-10/8-11
# print('\n习题8-9/8-10/8-11')
#
#
# def show_magicians(names): #8-9
#     for name in names:
#         print("这个魔术师的名字是：" + name.title())
#
#
# def make_great(Last_names, New_names):
#     while Last_names:
#         name = Last_names.pop()
#         New_names.append('The Great ' + name)
#
#
# magician_names = ['dawei', 'luobote', 'huluob']
# new_names = []
#
#
# make_great(magician_names, new_names) #8-10
# print("之前的列表：")
# show_magicians(magician_names)
# print("新的列表：")
# show_magicians(new_names)
#
# make_great(magician_names[:], new_names) #8-11
# print("之前的列表：")
# show_magicians(magician_names)
# print("新的列表：")
# show_magicians(new_names)
##############################################################
# def make_pizza(*toppings):
#     """打印顾客点的所有配料"""
#     print(toppings)
#
#
# make_pizza('pepperoni')
# make_pizza("mushrooms",'green peppers','extra cheese')
##############################################################
# def make_pizza(*toppings):
#     """概述要制作的披萨"""
#     print('\nMaking a pizza with the following toppings:')
#     for topping in toppings:
#         print("-" + topping)
#
#
# make_pizza('pepperoni')
# make_pizza("mushrooms", 'green peppers', 'extra cheese')
##############################################################
# def make_pizza(size,*toppings):
#     """概述要制作的比萨"""
#     print("\nMaking a " + str(size) + '-inch pizza with the following '
#                                       'toppings:')
#     for topping in toppings:
#         print("-" + topping)
#
#
# make_pizza(16, 'pepperoni')
# make_pizza(12, 'mishrooms', 'green pepers', 'extra cheese')
##############################################################
# def bulid_profile(first, last, **user_info):
#     """创建一个字典，其中包含我们知道的有关用户的一切"""
#     profile = {}
#     profile['first_name'] = first
#     profile['last_name'] = last
#     for key, value in user_info.items():
#         profile[key] = value
#     return profile
#
#
# user_profile = bulid_profile('albert', 'einstein',
#                              location = 'princeton',
#                              field = 'physics')
# print(user_profile)
##############################################################
# #习题8-12
# print('\n习题8-12')
# def get_food(*foods):
#     print("你需要加入的食材有： ")
#     for food in foods:
#         print(food)
#
#
# get_food('shala', 'noddle', 'beef')
##############################################################
# # 习题8-13
# print('\n习题8-13')
#
#
# def bulid_profile(first, last, **user_info):
#     """创建一个字典，其中包含我们知道的有关用户的一切"""
#     profile = {}
#     profile['first_name'] = first
#     profile['last_name'] = last
#     for key, value in user_info.items():
#         profile[key] = value
#     return profile
#
#
# user_profile = bulid_profile('albert', 'einstein',
#                              location='princeton',
#                              field='physics',
#                              city='shenzhen')
# print(user_profile)
##############################################################
# # 习题8-14
# print('\n习题8-14')
#
#
# def make_car(make, size, **lib):
#     cars = {}
#     cars['制造商'] = make
#     cars['型号'] = size
#     for key,value in lib.items():
#         cars[key] = value
#     return cars
#
#
# car = make_car('subaru', 'outback', color='blue', tow_package=True)
# print(car)
##############################################################
# import pizza #导入整个模块
# pizza.make_pizza(16, 'pepperoni')
# pizza.make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')
##############################################################
# import pizza as p #导入整个模块
# p.make_pizza(16, 'pepperoni')
# p.make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')
##############################################################
# from pizza import make_pizza #导入特定模块
# make_pizza(16, 'pepperoni')
# make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')
##############################################################
# from pizza import make_pizza as mp #指定变量别名
# mp(16, 'pepperoni')
# mp(12, 'mushrooms', 'green peppers', 'extra cheese')
##############################################################
# from pizza import * #一般不推荐使用
# make_pizza(16, 'pepperoni')
# make_pizza(12, 'mushrooms', 'green peppers', 'extra cheese')
##############################################################
# # 习题8-15
# import printing_functions as pf
#
# unprint = ['A', 'B', 'C']
# inprint = []
# pf.print_models(unprint, inprint)
##############################################################
# 习题8-16
unprint = ['A', 'B', 'C']
inprint = []
##############################################################
# import printing_functions
#
# printing_functions.print_models(unprint, inprint)
##############################################################
# from printing_functions import print_models
#
# print_models(unprint, inprint)
# ##############################################################
# from printing_functions import print_models as pm
#
# pm(unprint, inprint)
# ##############################################################
# import printing_functions as pf
#
# pf.print_models(unprint, inprint)
##############################################################
# from printing_functions import *
#
# print_models(unprint, inprint)
#############################################################