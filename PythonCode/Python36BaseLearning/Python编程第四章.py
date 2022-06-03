magicians = ['alice', 'david', 'carolina']
for magician in magicians:
    print(magician.title() + ", that was a great trick!")
    print("I can't wait to see your next trick, " + magician.title() + ".\n")
print("Thank you, everyone. That was a great magic show!")

# 习题4-1
print("习题4-1：\n")
Pizza_Names = ["fruit pizza", 'liulian pizza', 'beef pizza']
for Pizza_Name in Pizza_Names:
    print("I like " + Pizza_Name)
print("I really love pizza")
print("习题4-2：\n")
animals = ['dog', 'cat', 'mouse']
for animal in animals:
    print("A " + animal + " would make a great pet!")
print("Any of these animals would make a great pet!")

for value in range(1, 5):
    print(value)
# 使用list将range转换成列表
numbers = list(range(1, 6))
print(numbers)
even_numbers = list(range(2, 11, 2))
print(even_numbers)

squares = []
for value in range(1, 11):
    # square = value ** 2
    # squares.append(square)
    squares.append(value ** 2)
print(squares)
print("数列最大值：" + max(squares).__str__() + ", 数列最小值：" + min(squares).__str__()
      + ", 数列之和为：" + sum(squares).__str__())

squares = [value ** 2 for value in range(1, 11)]
print(squares)
# #习题4-3
# print("习题4-3")
# for number in range(1,21):
#     print(number)
# print("习题4-4")
# squares = [value for value in range(1,1000001)]
# print(squares)
# print("习题4-5")
# print("数列最大值：" + max(squares).__str__() + ", 数列最小值：" + min(squares).__str__()
#       + ", 数列之和为：" + sum(squares).__str__())
# print("习题4-6")
# odd = [value for value in range(1,20,2)]
# print(odd)
# print("习题4-7")
# numbers.clear()
# for value in range(3,31):
#     if(value % 3 == 0):
#         print(value)
#         numbers.append(value)
# print(numbers)
# print("习题4-8")
# odd= [value **2 for value in range(1,11)]
# print(odd)

plays = ['charles','martina','michael','florence','eli']
print(plays[0:3])
print(plays[1:4])
print(plays[:4])#未指定初始位，则从开始提取
print(plays[-3:])#选取后三个元素
plays = ['charles','martina','michael','florence','eli']
print("Here are the first three players on my team: ")
for plays in plays[:3]:
    print(plays.title())
print('切片复制')

#food.py
my_foods = ['pizza','falafel','carrot cake']
friend_foods = my_foods[:]  #复制列表切片
print('My favorite foods are: ')
my_foods.append("cannoli")
friend_foods.append('ice cream')
print(my_foods)
print("\nMy friend's favorite foods are: ")
print(friend_foods)
print('直接复制')
my_foods = ['pizza','falafel','carrot cake']
friend_foods = my_foods  #复制列表切片
print('My favorite foods are: ')
my_foods.append("cannoli")
friend_foods.append('ice cream')
print(my_foods)
print("\nMy friend's favorite foods are: ")
print(friend_foods)
#习题4-10
print('\n习题4-10\n')
plays = ['charles','martina','michael','florence','eli']
print("The first three items in the list are: ")
for value in plays[:3]:
    print(value)
print(plays[:3])
print("Three items from the middle of the list are: ")
for value in plays[1:4]:
    print(value)
print(plays[1:4])
print("The last three items in the list are: ")
for value in plays[-3:]:
    print(value)
print(plays[-3:])
#习题4-11
print('\n习题4-11\n')
Pizza_Names = ["fruit pizza", 'liulian pizza', 'beef pizza']
friend_pizzas = Pizza_Names[:]
Pizza_Names.append("Lenmon pizza")
friend_pizzas.append("banana pizza")
print("My favorite pizzas are:")
for pizza in Pizza_Names:
    print(pizza)
print(Pizza_Names)
print("My friend's favorite pizzas are:")
for pizza in friend_pizzas:
    print(pizza)
print(friend_pizzas)

dimensions = (200,50)
# print(dimensions[0])
# print(dimensions[1])
for dimension in dimensions:
    print(dimension)
dimensions = (400,100)
for dimension in dimensions:
    print(dimension)

#习题4-13
print('习题4-13')
foods = ('noddle','beef','rice','hamburger','fruit')
# foods[0] = 'banana'
print("之前有的菜品: ")
for food in foods:
    print(food)
foods = ["banana",'apple']
print("现在有的菜品: ")
for food in foods:
    print(food)