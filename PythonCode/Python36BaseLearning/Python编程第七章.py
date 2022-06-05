#用户输入函数
print('\t用户输入函数\n')
message = input("Tell me something, and I will repeat it back to you: ")#变量储存在message中
print(message)
############################################################################
name = input("Please enter your name: ")
print("Hello, " + name + "!")
############################################################################
prompt = "If you tell us who you are, we can personalize the messages you see."
prompt += "\nWhat is your first name? "
name = input(prompt)
print("\nHello, " + name + "!")
############################################################################
height = input("How tall are you, in inches?")
height = int(height)
if height >= 36:
    print("\nYou're tall enough to ride!")
else:
    print("\nYou'll be able to ride when you're a little older.")
############################################################################
number = input("Enter a number, and I'll tell you if it's even or odd: ")
number = int(number)
if number % 2 == 0:
    print("\nThe number " + str(number) + " is even.")
else:
    print("\nThe number " + str(number) + " is odd.")
############################################################################
#习题7-1
print('\n习题7-1')
car = input("请问你要租赁什么样的汽车？\n是否我能给你一些建议？")
print("我想租一辆"+ car)
############################################################################
#习题7-2
print('\n习题7-2')
number = input("请问有多少人用餐？")
if int(number) > 8:
    print("对不起，没有空桌！")
else:
    print("有空桌，里边请！")
############################################################################
#习题7-3
print('\n习题7-3')
number = input("请输入一个数，判断是不是十的倍数！")
if int(number) % 10 == 0:
    print("这个数是十的倍数！")
else:
    print("这个数不是十的倍数！")
############################################################################
#while循环
current_number = 1
while current_number <= 5:
    print(current_number)
    current_number += 1
prompt = '\nTell me something, and I will repeat it back to you: '
prompt += "\nEnter 'quit' to end the program. "
message = ""
while message != 'quit':
    message = input(prompt)
    if message != 'quit':#写下quit,不打印直接退出！
        print(message)
############################################################################
# 标志
prompt = "\nTell me something, and I will repeat it back to you:"
prompt += "\nEnter 'quit' to end the program. "
active = True
while active:
    message = input(prompt)
    if message == 'quit':
        active = False
    else:
        print(message)
prompt = '\nPlease enter the name of a city you have visited: '
prompt += "\n(Enter 'quit' when you are finished.) "
############################################################################
while True:
    city = input(prompt)
    if city == 'quit':
        break
    else:
        print("I'd love to go to " + city.title() + "!")
############################################################################
current_number = 0
while current_number < 10:
    current_number += 1
    if current_number % 2 == 0:
        continue
    print(current_number)
############################################################################
#习题7-4
print('习题7-4')
while True:
    message = input("请输入披萨配料：\n输入'退出' 时结束循环")
    if message == '退出':
        break
    else:
        print("我们将在披萨中加入配料" + message)
############################################################################
#习题7-5
print('习题7-5')
while True:
    print("输入'退出'退出程序")
    years = input("请告诉我您的年龄是多少？")
    if years == '退出':
        break
    else:
        years = int(years)
        if years < 3:
            print("小朋友免票！")
        elif years < 13:
            print("青少年票价为$10!")
        else:
            print("成年人票价$15!")
############################################################################
#习题7-6
print('习题7-6')
################使用break 语句在用户输入'quit' 时退出循环#################
while True:
    print("输入'退出'退出程序")
    years = input("请告诉我您的年龄是多少？")
    if years == '退出': #break
        break
    else:
        years = int(years)
        if years < 3:
            print("小朋友免票！")
        elif years < 13:
            print("青少年票价为$10!")
        else:
            print("成年人票价$15!")
################在while 循环中使用条件测试来结束循环#################
print("输入'退出'退出程序")
years = ''
while years != '退出':
    years = input("请告诉我您的年龄是多少？")
    if years != '退出':
        years = int(years)
        if years < 3:
            print("小朋友免票！")
        elif years < 13:
            print("青少年票价为$10!")
        else:
            print("成年人票价$15!")
################使用变量active 来控制循环结束的时机#################
active = True
print("输入'退出'退出程序")
while active:
    years = input("请告诉我您的年龄是多少？")
    if years == '退出':
        active = False
    else:
        years = int(years)
        if years < 3:
            print("小朋友免票！")
        elif years < 13:
            print("青少年票价为$10!")
        else:
            print("成年人票价$15!")
##################################################################
# 习题7-7
print('习题7-7')
numbers = 0
while True:
    numbers += 1
    print(numbers)
##################################################################
# 首先，创建一个待验证用户列表
# 和一个用于储存已验证用户的空列表
unconfirmed_users = ['alice','brian','candace']
confirmed_users = []
# 验证每个用户，直到没有未验证用户为止
# 将每个经过验证的列表都移到已验证用户列表中
while unconfirmed_users:
    current_user = unconfirmed_users.pop()
    print('Verifying user: ' + current_user.title())
    confirmed_users.append(current_user)
#显示所有已验证的用户
print('\nThe following users have been confirmed: ')
for confirmed_user in confirmed_users:
    print(confirmed_user.title())
#####################################################################
pets = ['dog', 'cat', 'dog', 'goldfish', 'cat', 'rabbit', 'cat']
print(pets)
while 'cat' in pets:
    pets.remove('cat')
print(pets)
######################################################################
responses = {}
#设置一个标志，指出调查是否继续
polling_active = True
while polling_active:
    # 提示输入被调查者的名字和回答
    name = input("\nWhat is your name? ")
    response = input("Which mountain would you like to climb someday? ")

    # 将答卷储存在字典中
    responses[name] = response

    #看看是否还有人参与调查
    repeat = input('Would you like to let another person respond? (yes/no) ')
    if repeat == 'no':
        polling_active = False
#调查结束，显示结果
print('\n--- Poll Results ---')
for name, response in responses.items():
    print(name + ' would like to climb ' + response + '.')
###########################################################################
# 习题7-8
print('习题7-8')
sandwich_orders = ['beef', 'peach', 'fresh', 'chicken']
finished_sandwiches = []
while sandwich_orders:
    temp = sandwich_orders.pop()
    print("I made your " + temp + " sandwich!")
    finished_sandwiches.append(temp)
print("我喜欢吃的三明治：" + str(finished_sandwiches))
###########################################################################
# 习题7-9
print('习题7-9')
Flag = 0
sandwich_orders = ['pastrami', 'beef', 'pastrami', 'peach', 'fresh', 'chicken'
                  , 'pastrami']
while 'pastrami' in sandwich_orders:
    if Flag == 0:
        print("'pastrami'卖完了！")
        Flag += 1
    else:
        sandwich_orders.remove('pastrami')
print("您要的菜品有:" + str(sandwich_orders))
###########################################################################
# 习题7-10
print('习题7-10')
dream_place = {}
while True:
    name = input("你的名字")
    place = input("你想去那个地方度假")
    dream_place[name] = place
    active = input("还有人参与调查吗（是\否）")
    if active == '否':
        break
print('\n调查结果：')
for name,place in dream_place.items():
    print(name + '想去' + place)
###########################################################################
