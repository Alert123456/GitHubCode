alien_0 = {'color': 'green', 'points': 5}  # 键-值对
print(alien_0['color'])
print(alien_0['points'])
new_points = alien_0['points']
print("You just earned " + str(new_points) + " points!")
alien_0['x-position'] = 0
alien_0['y-position'] = 25
print(alien_0)
print('空列表添加：')
alien_0 = {}
alien_0['color'] = 'green'
alien_0['points'] = 5
print(alien_0)
alien_0 = {'color': 'green'}
print("The alien's color is " + alien_0['color'] + ".")
alien_0 = {'color': 'yellow'}
print("The alien's color now is " + alien_0['color'] + ".")

alien_0 = {'x-position': 0, 'y-position': 25, 'speed': 'medium'}
print("Original x-postion: " + str(alien_0['x-position']))
alien_0['speed'] = 'fast'
# 向右移动外星人
# 据外星人当前速度决定将其移动多远
if alien_0['speed'] == 'slow':
    x_increment = 1
elif alien_0['speed'] == 'medium':
    x_increment = 2
else:
    x_increment = 3
# 新位置等于老位置加增量
alien_0['x-position'] = alien_0['x-position'] + x_increment
print("New x-position: " + str(alien_0['x-position']))

alien_0 = {'color': 'green', 'points': 5}
print(alien_0)
del alien_0['color']
print(alien_0)

favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
print("Sarah's favorite language is " + favorite_languages['sarah'].title()
      + '.')
# 习题6-1
print('习题6-1')
song_zeyang = {
    "first_name": "Song",
    'last_name': 'Zeyang',
    'age': '21',
    'city': 'Harbin',
}
for value in song_zeyang:
    print(song_zeyang[value])
# 习题6-2
print('习题6-2')
song_zeyang = {
    "Song": 1,
    'Ji': 12,
    'Zhang': 31,
    'Liu': 53,
    'Wei': 64,
}
for value in song_zeyang:
    print(value + " like number is: " + str(song_zeyang[value]))
# 习题6-3
print('习题6-3')
explian = {
    '添加键值对': 'name["键"] = 值',
    '修改字典的值': 'name["键"] = 值',
    '删除键值对': 'del name["键"] ',
    '空列表检测': 'if not list：',
    '布尔表达式': '为True或False',
}
for key, value in explian.items():
    print(key + ':' + value)

user_0 = {
    'username': 'efermi',
    'first': 'enrico',
    'last': 'fermi',
}
for key, value in user_0.items():
    print('\nKeys: ' + key)
    print('\nValue: ' + value)
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
for name, language in favorite_languages.items():
    print(name.title() + "'s favorite language is " +
          language.title() + '.')
for name in favorite_languages.keys():
    print(name.title())
friends = ['phil', 'sarah']
for name in favorite_languages.keys():
    print(name.title())
    if name in friends:
        print(" Hi " + name.title() +
              ', I see your favorite language is ' +
              favorite_languages[name].title() + '!')
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
if 'erin' not in favorite_languages.keys():
    print("Eric, please take our poll!")
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
for name in sorted(favorite_languages.keys()):
    print(name.title() + ", thank you for taking the poll.")

for language in favorite_languages.values():
    print(language.title())
for language in set(favorite_languages.values()):
    print(language.title())
# 习题6-4
print('习题6-4')
explian = {
    '添加键值对': 'name["键"] = 值',
    '修改字典的值': 'name["键"] = 值',
    '删除键值对': 'del name["键"] ',
    '空列表检测': 'if not list：',
    '布尔表达式': '为True或False',
}
for key, value in explian.items():
    print(key + ':' + value)
# 习题6-5
print('习题6-5')
river = {
    'nile': 'egypt',
    'songhuajiang': "china",
    "suifenhe": 'china',
}
for key, value in river.items():
    print("The " + key.title() + " runs through " + value.title())
    print('The river name is : ' + key.title())
    print("The country is : " + value.title())
# 习题6-6
print('习题6-6')
favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
friends = ['phil', 'sarah', 'curl']
for name in friends:
    if name in favorite_languages.keys():
        print("Thank you " + name + " poll !")
    else:
        print("Sorry, " + name + " can you poll?")

alien_0 = {'color': "green", 'points': 5}
alien_1 = {'color': "yellow", 'points': 10}
alien_2 = {'color': "red", 'points': 15}
aliens = [alien_0, alien_1, alien_2]

for alien in aliens:
    print(alien)
# 创建一个用于储存外星人的空列表
aliens = []
# 创建30个绿色的外星人
for alien_number in range(30):
    new_alien = {'color': 'green', 'points': 5, 'speed': 'slow'}
    aliens.append(new_alien)

# 显示前五个外星人
for alien in aliens[:5]:
    print(alien)
print("...")
print("Total number of aliens: " + str(len(aliens)))

for alien in aliens[:3]:
    if alien['color'] == 'green':
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10
# 显示前五个机器人
for alien in aliens[0:5]:
    print(alien)
print("...")
for alien in aliens[:3]:
    if alien['color'] == 'green':
        alien['color'] = 'yellow'
        alien['speed'] = 'medium'
        alien['points'] = 10
    elif alien['color'] == 'yellow':
        alien['color'] = 'red'
        alien['speed'] = 'fast'
        alien['points'] = 15
for alien in aliens[0:5]:
    print(alien)
print("...")

pizza = {
    'crust': 'thick',
    'toppings': ['mushrooms', 'extra cheese'],
}
# 概述所点的比萨
print("You ordered a " + pizza['crust'] + '-crust pizza ' +
      'with the following toppings:')
for topping in pizza['toppings']:
    print('\t' + topping)

favorite_languages = {
    'jen': ['python', 'ruby'],
    'sarah': ['c'],
    'edward': ['ruby', 'go'],
    'phil': ['python', 'haskell'],
}
for name, languages in favorite_languages.items():
    print('\n' + name.title() + "'s favorite languages are: ")
    for language in languages:
        print('\t' + language.title())

users = {
    'aeinstein': {
        'first': 'albert',
        'last': 'einstein',
        'location': 'princeton',
    },
    'mcurie': {
        'first': 'mcurie',
        'last': 'curie',
        'location': 'paris',
    },
}
for username, user_info in users.items():
    print('\nUsername: ' + username)
    full_name = user_info['first'] + " " + user_info['last']
    location = user_info['location']

    print("\tFull name: " + full_name.title())
    print("\tLocation: " + location.title())

# 习题6-7
song_zeyang = {
    "first_name": "Song",
    'last_name': 'Zeyang',
    'age': '21',
    'city': 'Harbin',
}
users = {
    "song_zeyang": {
        "first_name": "Song",
        'last_name': 'Zeyang',
        'age': '21',
        'city': 'Harbin',
    },
    "ji_xingyan": {
        "first_name": "ji",
        'last_name': 'xingyan',
        'age': '21',
        'city': 'Harbin',
    },
    "zhang_bolun": {
        "first_name": "zhang",
        'last_name': 'bolun',
        'age': '21',
        'city': 'hangzhou',
    },
}
for name, value in users.items():
    print('用户名：' + name)
    full_name = value['first_name'] + value['last_name']
    age = value['age']
    city = value['city']
    print("他的全名是： " + full_name + " 他的年龄是：" + age + " 他所在城市为：" + city)
# 习题6-8
print('习题6-8')
cats = {'lie': 'cat', "own_name": 'carl', }
dogs = {'lie': 'dog', "own_name": 'cristal', }
fishes = {'lie': 'fish', "own_name": 'Manjula', }
pets = [cats, dogs, fishes]
for pet in pets:
    print('类型为：' + pet['lie'] + ",主人的名字为: " + pet["own_name"])
# 习题6-9
print('习题6-9')
songplace = ["harbin", "fenland", "moxie"]
zhangplace = ["exiguous", "hangzhou", "dixieland"]
jiplace = ["turfier", "beijing", "wuhan"]
favorite_places = {
    "song_zeyang": songplace,
    "zhang_bolun": zhangplace,
    "ji_xingyan": jiplace,
}
for name, favorite_place in favorite_places.items():
    print('\n' + name + " like this places: ")
    for place in favorite_place:
        print(place)
# 习题6-10
print('习题6-10')
# SongNum = [1,2,3,4,5,6]

song_zeyang = {
    "Song": [1, 2, 3, 4, 5, 6],
    'Ji': [12, 13, 14, 1, 5, 6],
    'Zhang': [31, 1, 8, 99, 21],
    'Liu': [31, 8, 79, 32, 7, 77],
    'Wei': [64, 86, 79, 21, 93],
}
for name, value in song_zeyang.items():
    for Num in value:
        print("Names: " + name + ",Value: " + str(Num))

# 习题6-11
print('习题6-11')

users = {
    "Harbin": {
        "country": "China",
        'population': '21000',
        'fact': 'Good',
    },
    "meiguo": {
        "country": "meiguo",
        'population': '2001',
        'fact': 'Bed',
    },
    "China": {
        "country": "China",
        'population': '20100',
        'fact': 'Nice',
    },
}
for city, value in users.items():
    print("\n城市介绍：" + city)
    print("国家" + value["country"])
    print("人口" + value["population"])
    print("事实" + value["fact"])
