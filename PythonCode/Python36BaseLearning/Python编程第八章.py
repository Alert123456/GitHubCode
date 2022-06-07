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
# def make_shirt(size,fonts_style='I love Python'):
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
# 习题8-9/8-10/8-11
print('\n习题8-9/8-10/8-11')


def show_magicians(names): #8-9
    for name in names:
        print("这个魔术师的名字是：" + name.title())


def make_great(Last_names, New_names):
    while Last_names:
        name = Last_names.pop()
        New_names.append('The Great ' + name)


magician_names = ['dawei', 'luobote', 'huluob']
new_names = []


make_great(magician_names, new_names) #8-10
print("之前的列表：")
show_magicians(magician_names)
print("新的列表：")
show_magicians(new_names)

make_great(magician_names[:], new_names) #8-11
print("之前的列表：")
show_magicians(magician_names)
print("新的列表：")
show_magicians(new_names)
