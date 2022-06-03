cars = ["audi", "bmw", "subaru", "toyota"]
for car in cars:
    if car == 'bmw':
        print(car.upper())
    else:
        print(car.title())

requested_topping = 'mushrooms'
if requested_topping != 'anchovies':
    print("判断不相等例子：Hold the anchovies")

answer = 17
if answer != 42:
    print("That is not the correct answer. Please try again!")

banned_users = ['andrew', 'carolina', 'david']
user = 'marie'
if user not in banned_users:
    print(user.title() + ', you can post a response if you wish.')
game_active = True
can_edit = False
# 习题5-1
print('\n习题5-1\n')
car = 'bmw'
print("Is car == 'bmw'?I predict True.")
print(car == 'bmw')
print("Is car == 'audi'?I predict True.")
print(car == 'audi')
print('\n习题5-2\n')
car = 'bmw'
print("The car is bmw? " + (car == 'bmw').__str__())
print("The car is audi? " + (car == 'audi').__str__())
print("The car is BMW? " + (car.upper() == 'BMW').__str__())

years = 20
print("\nI am " + years.__str__() + " old!")
print("我等于20吗？" + (years == 20).__str__())
print("我不等于20吗？" + (years != 20).__str__())
print("我小于等于20吗？" + (years <= 20).__str__())
print("我大于等于20吗？" + (years >= 20).__str__())
print("我小于20吗？" + (years < 20).__str__())
print("我大于20吗？" + (years < 20).__str__())

my_brother = 21
our_years = [years, my_brother]
print("我" + years.__str__() + "岁, " + "我哥" + my_brother.__str__() + "岁")
print("我和我哥都大于20吗？" + ((years > 20) and (my_brother > 20)).__str__())
print("我和我哥有人大于20吗？" + ((years > 20) or (my_brother > 20)).__str__())
print("我和我哥有人20岁吗？" + (20 in our_years).__str__())
print("我和我哥没人20吗？" + (20 not in our_years).__str__())

age = 19
if age >= 18:
    print("You are old enough to vote!")
    print("Have you registered to vote yet!")
else:
    print("Sorry, you are too young to vote.")
    print("Please register to vote as soon as you turn 18!")

age = 71
# if age < 4:
#     price = 0
# elif (age < 18) or (age > 65):
#     price = 5
# else:
#     price = 10

if age < 4:
    price = 0
elif age < 18:
    price = 5
elif age < 65:
    price = 10
elif age >= 65:
    price = 5
print("Your admission cost is $" + str(price) + ".")

requested_toppings = ["mushrooms",'extra cheese']
#缩进控制是否为多层嵌套
if "mushrooms" in requested_toppings:
    print("Adding mushrooms.")
if "pepperoni" in requested_toppings:
    print("Adding pepperoni")
if 'extra cheese' in requested_toppings:
    print("Adding extra cheese")

#习题5-3
print("\n习题5-3\n")
alien_color_lib = ["green", "yellow", 'red']
for alien_color in alien_color_lib:
    print("alien_color is "+ alien_color + "!")
    if alien_color == 'green':
        print("Congratulate, You get 5 points !\n") #5-3
    elif alien_color == "yellow":
        print("Congratulate, You get 10 points !\n") #5-5
    else:
        print("Congratulate, You get 15 pionts !\n") #5-4
print("\n习题5-6\n")
for years in range(0,70,2):
    if years < 2:
        print("他的年龄是" + str(years) + ",他是婴儿。")
    elif years < 4:
        print("他的年龄是" + str(years) + ",他正蹒跚学步。")
    elif years < 13:
        print("他的年龄是" + str(years) + ",他是儿童。")
    elif years < 20:
        print("他的年龄是" + str(years) + ",他是青少年。")
    elif years < 65:
        print("他的年龄是" + str(years) + ",他是成年人。")
    else:
        print("他的年龄是" + str(years) + ",他是老年人。")
print("\n习题5-7\n")
favorite_fruits = ["banana","apple","peach"]
if "banana".lower() in favorite_fruits:
    print("You really like bananas!")
if "Apple".lower() in favorite_fruits:
    print("You really like Apple!")
if "peach".lower() in favorite_fruits:
    print("You really like peach!")
if "liulian".lower() in favorite_fruits:
    print("You really like liulian!")
if "putao".lower() in favorite_fruits:
    print("You really like putao!")
print("\n")


#requested_toppings = ["mushrooms", "green peppers", "extra cheese"]
requested_toppings = []
if not requested_toppings:  #空列表检测
    print("Are you sure you want a plain pizza?")
else:
    for requested_topping in requested_toppings:
        if requested_topping == 'green peppers':
            print("Sorry, we are out of green peppers right now.")
        else:
            print("Adding " + requested_topping + ".")
    print('\nFinished making your pizza!')

available_toppings = ['mushrooms', 'olives', 'green peppers','pepperoni',
                      'pineapple', 'extra cheese']
requested_toppings = ['mushrooms', 'french fries', 'extra cheese']
for requested_topping in requested_toppings:
    if requested_topping in available_toppings:
        print("Adding " + requested_topping + ".")
    else:
        print("Sorry, we don't have " + requested_topping + ".")
print("\nFinished making your pizza!")

#习题5-8
print("\n习题5-8")

names = ['alert','one','two','admin','origin']
# names = []
if not names: #5-9
    print("We need to find some users!")
else:
    for name in names:
        if name == "admin":
            print("Hello admin, would you like to see astatus report?")
        else:
            print("Hello " + name + ", thank you for logging in again.")
#习题5-10
print("\n习题5-10")
current_users = ['alert','one','two','admin','origin']
new_users = ['Alert','btw','miku','admin','origin']
for new_user in new_users:
    if new_user.lower() in current_users:
        print("该用户名 " + new_user + " 已经使用，请更换其他有户名")
    else:
        print("该用户名未被使用")
#习题5-11
print("\n习题5-11")
numList = []
for number in range(1,10):
    if number < 2:
        numList.append(str(number) + "st")
        print(str(number) + "st")
    elif number < 3:
        numList.append(str(number) + "nd")
        print(str(number) + "nd")
    elif number < 4:
        numList.append(str(number) + "rd")
        print(str(number) + "rd")
    else:
        numList.append(str(number) + "th")
        print(str(number) + "th")