#自行车类型
bicycles = ['trek','cannondale','redline','specialized']
print(bicycles)
print("第一款自行车为："+bicycles[0])
print("第一款自行车为："+bicycles[0].title())
print("第二款自行车为："+bicycles[1]+","+"第四款自行车为："+bicycles[3])
print("最后一款自行车为："+bicycles[-1])#索引为-1表示返回最后一个列表元素
message = "My first bicycle was a " + bicycles[0].title() + '.'
print(message)

#习题3-1
names = ['song zeyang','ji xingyan','zhang bolun']
for i in range(3):
    print(names[i])
    print("Hi "+names[i]+", Good Morning!") #3-2

Ways = ['SubWays','Moto','Becycle','air']
for i in range(4):
    print("I would like to own a Honda " + Ways[i])

motorcycles = ['honda','yamaha','suzuki']
print(motorcycles)
motorcycles[0] = 'ducati'
print(motorcycles)
motorcycles.append('ducati') #添加元素
print(motorcycles)

motorcycles = []
motorcycles.append('honda')
motorcycles.append('yamaha')
motorcycles.append('suzuki')
print(motorcycles)
#在列表插入元素
motorcycles = ['honda','yamaha','suzuki']
motorcycles.insert(0,'ducati')
print(motorcycles)

del motorcycles[0]
print(motorcycles)

motorcycles = ['honda','yamaha','suzuki']
print(motorcycles)

popped_motorcycle = motorcycles.pop() #弹出末尾的值并取出
print(motorcycles)
print('the motorcycles end word is '+popped_motorcycle)

motorcycles = ['honda','yamaha','suzuki']
last_owned = motorcycles.pop()
print("The last motocycle I owned was a " + last_owned.title() + ".")
motorcycles = ['honda','yamaha','suzuki']
first_owned = motorcycles.pop(0)
print("The first motocycle I owned was a " + first_owned.title() + ".")
#根据值删除元素
motorcycles = ['honda','yamaha','suzuki','ducati']
print(motorcycles)
motorcycles.remove('ducati')
print(motorcycles)
motorcycles = ['honda','yamaha','suzuki','ducati']
too_expensive = 'ducati'
motorcycles.remove(too_expensive)
print(motorcycles)
print('\nA ' + too_expensive.title() + ' is too expensive for me')
#习题3-4
names = ['song zeyang','ji xingyan','zhang bolun']
for i in range(3):
    print("Very happy "+names[i]+" can join in my party")
outoQingdao = names.pop(1)
print("Very sorry "+outoQingdao+" going into Qingdao and not join us")
NewFriends = 'wei shuangyin'
names.insert(1,NewFriends)
print("New friends "+ NewFriends +" going into Qingdao and not join us")
for i in range(3):
    print("Very happy "+names[i]+" can join in my party")
newFirstfriends = 'yang chen'
newMiddlefriends = 'tong yawei'
newlastfriends = 'zou shuai'
names.insert(0,newFirstfriends)
names.insert(2,newMiddlefriends)
names.append(newlastfriends)
print('\n习题3-6')
for i in range(6):
    print("Very happy "+names[i]+" can join in my party")
#print(len(names))
for i in range(len(names)-2):
    print("Sorry "+names.pop()+"this is not position for you !")

print(names)
del names[0]
del names[0]
print(names)
#组织列表
cars = ['bmw','audi','toyota','subaru']
cars.sort(reverse=True)
print(cars)

cars = ['bmw','audi','toyota','subaru']
print("Here is the original list:")
print(cars)
print("\nHere is the sorted list: ")
print(sorted(cars))
print("\nHere is the original list:")
print(cars)
print('\n倒转打印')
cars = ['bmw','audi','toyota','subaru']
print(cars)
cars.reverse()
print(cars)
print('习题3-8')
plase = ['harbin','guangzhou','shanghai','chengdu','wuhan']
print(plase)
print(sorted(plase))
print(plase)
print(sorted(plase,reverse=True))
print(plase)
plase.reverse()
print(plase)
plase.reverse()
print(plase)
plase.sort()
print(plase)
plase.sort(reverse=True)
print(plase)
print(plase[-1])