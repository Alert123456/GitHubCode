########################################################################
# # 创建Dog类
# class Dog:
#     """一次模拟小狗的简单尝试"""
#
#     def __init__(self, name, age):  # 初始化方法，self需位于其他参数之前
#         """初始化属性name和age"""
#         self.name = name  # 可被类中的所有实例访问，叫做属性
#         self.age = age
#
#     def sit(self):
#         """模拟小狗被命令时蹲下"""
#         print(self.name.title() + " is now sitting.")
#
#     def roll_over(self):
#         """模拟小狗被命令时打滚"""
#         print(self.name.title() + " rolled over!")


#########################################################################
# # 调用Dog类
# my_dog = Dog("Whllie", 6)
# your_dog = Dog('lucy', 3)
# # 直接访问对象
# print("My dog's name is " + my_dog.name.title() + '.')
# print("My dog is " + str(my_dog.age) + '.')
# # 调用方法
# my_dog.sit()
# my_dog.roll_over()
# # 直接访问对象
# print("\nMy dog's name is " + your_dog.name.title() + '.')
# print("My dog is " + str(your_dog.age) + '.')
# # 调用方法
# your_dog.sit()
# your_dog.roll_over()
##########################################################################
# # 习题9-1
# print('习题9-1')
#
#
# class Restaurant:
#     def __init__(self, restaurant_name, cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#
#     def describe_restaurant(self):
#         print("餐馆的名字为: " + self.restaurant_name.title() + "，空座为: "
#               + str(self.cuisine_type) + '.')
#
#     def open_restaurant(self):
#         print("该餐厅正在营业中，欢迎前来就餐！")
#
#
# restaurant = Restaurant('老厨家', 26)
# # print("餐馆的名字为: " + restaurant.restaurant_name.title() + "，空座为: "
# #       + str(restaurant.cuisine_type) + '.')
# restaurant.describe_restaurant()
# restaurant.open_restaurant()
##########################################################################
# # 习题9-2
# print('习题9-2')
# Dongbeiguobaorou = Restaurant('老东北锅包肉', 10)
# Dongbeijiaozi = Restaurant('东北饺子馆', 15)
# Dongbeiguobaorou.describe_restaurant()
# Dongbeijiaozi.describe_restaurant()
##########################################################################
# # 习题9-3
# print('习题9-3')
#
#
# class User():
#     def __init__(self, first_name, last_name, gender, age):
#         self.first_name = first_name
#         self.last_name = last_name
#         self.gender = gender
#         self.age = age
#
#     def describe_user(self):
#         print("这个人的全名是：" + self.first_name.title()
#               + self.last_name.title() + ', 他的性别是：' + self.gender
#               + ", 他的年龄是：" + str(self.age) + ".")
#
#     def greet_user(self):
#         print(self.first_name.title() + self.last_name.title()
#               + ", 非常感谢你给予真实有效的信息！")
#

# lihua = User('李', '华', '男', 26)
# zhuangxiaomei = User('张', '晓梅', '男', 26)
# songxiaofeng = User('宋', '晓峰', '男', 26)
# lihua.describe_user()
# lihua.greet_user()
# zhuangxiaomei.describe_user()
# zhuangxiaomei.greet_user()
# songxiaofeng.describe_user()
# songxiaofeng.greet_user()
# # 是否可以用字典或者列表代替呢？
# users_information = [User('李', '华', '男', 26), User('张', '晓梅', '男', 31),
#                      User('宋', '晓峰', '男', 18)]
#
# for user_information in users_information:
#     user_information.describe_user()
#     user_information.greet_user()
# 其实是可以的，可以用字典或者列表循环打印
##########################################################################
# # 类与实例的使用
# class Car():
#     """一次模拟汽车的简单尝试"""
#
#     def __init__(self, make, model, year):
#         """初始化描述汽车的属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         self.odometer_reading = 0
#
#     def get_descriptive_name(self):
#         """返回整洁的描述性信息"""
#         long_name = str(self.year) + ' ' + self.make + ' ' + self.model
#         return long_name.title()
#
#     def read_odometer(self):
#         """打印一条指出汽车里程的消息"""
#         print("This car has " + str(self.odometer_reading) + ' miles on it.')
#
#     def update_odometer(self, milage):  # 通过方法更新数值
#         """
#         将里程表读数设置为指定的值
#         禁止将里程表读数往回调
#         """
#         if milage >= self.odometer_reading:
#             self.odometer_reading = milage
#         else:
#             print("You can't roll back an odometer!")
#
#
#     def increment_odometer(self, miles):
#         """将里程表读数增加指定的量"""
#         self.odometer_reading += miles
#
#
#
# my_new_car = Car('audi', 'a4', 2016)
# print(my_new_car.get_descriptive_name())
# my_new_car.read_odometer()
# 修改属性的值
# my_new_car.odometer_reading = 23  # 直接通过实例修改属性的值
# my_new_car.read_odometer()

# my_new_car.update_odometer(23)  # 通过方法修改属性的值
# my_new_car.read_odometer()

# my_new_car.update_odometer(2300) # 通过方法令属性的值自加
# my_new_car.read_odometer()
# my_new_car.increment_odometer(100) # 通过方法令属性的值自加
# my_new_car.read_odometer()
##########################################################################
# # 习题9-4
# print('习题9-4')
#
#
# class Restaurant:
#     def __init__(self, restaurant_name, cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#         self.number_served = 0
#
#     def describe_restaurant(self):
#         print("餐馆的名字为: " + self.restaurant_name.title() + "，空座为: "
#               + str(self.cuisine_type) + '.'
#               + "这家餐厅有" + str(self.number_served) + '人来吃过！')
#         self.open_restaurant()
#
#     def open_restaurant(self):
#         print("该餐厅正在营业中，欢迎前来就餐！")
#
#     def increment_number_served(self, invalue):
#         if invalue > 0:
#             print("本餐厅预计可能接待人数上限" + str(invalue))
#         else:
#             print("不可以输入负数！")
#
#
#
# restaurant = Restaurant('老厨家', 26)
# # print("餐馆的名字为: " + restaurant.restaurant_name.title() + "，空座为: "
# #       + str(restaurant.cuisine_type) + '.')
# restaurant.describe_restaurant()
# restaurant.number_served = 30
# restaurant.describe_restaurant()
# restaurant.increment_number_served(100)
# restaurant.describe_restaurant()
##########################################################################
# # 习题9-5
# print('习题9-5')
#
#
# class User():
#     def __init__(self, first_name, last_name, gender, age):
#         self.first_name = first_name
#         self.last_name = last_name
#         self.gender = gender
#         self.age = age
#         self.login_attempts = 0
#
#     def describe_user(self):
#         print("这个人的全名是：" + self.first_name.title()
#               + self.last_name.title() + ', 他的性别是：' + self.gender
#               + ", 他的年龄是：" + str(self.age) + ".")
#
#     def greet_user(self):
#         print(self.first_name.title() + self.last_name.title()
#               + ", 非常感谢你给予真实有效的信息！")
#
#     def increment_login_attempts(self):
#         self.login_attempts += 1
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
#     def reset_login_attempts(self):
#         self.login_attempts = 0
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
# lihua = User('李', '华', '男', 26)
# lihua.increment_login_attempts()
# lihua.increment_login_attempts()
# lihua.increment_login_attempts()
# lihua.reset_login_attempts()
##########################################################################
# # 继承
# class Car():
#     """一次模拟汽车的简单尝试"""
#
#     def __init__(self, make, model, year):
#         """初始化描述汽车的属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         self.odometer_reading = 0
#         self.gas_tank = 0
#
#     def get_descriptive_name(self):
#         """返回整洁的描述性信息"""
#         long_name = str(self.year) + ' ' + self.make + ' ' + self.model
#         return long_name.title()
#
#     def read_odometer(self):
#         """打印一条指出汽车里程的消息"""
#         print("This car has " + str(self.odometer_reading) + ' miles on it.')
#
#     def update_odometer(self, milage):  # 通过方法更新数值
#         """
#         将里程表读数设置为指定的值
#         禁止将里程表读数往回调
#         """
#         if milage >= self.odometer_reading:
#             self.odometer_reading = milage
#         else:
#             print("You can't roll back an odometer!")
#
#     def increment_odometer(self, miles):
#         """将里程表读数增加指定的量"""
#         self.odometer_reading += miles
#
#     def fill_gas_tank(self):
#         self.gas_tank = 1000
#         print("This car's gas is " + str(self.gas_tank) + "!")
#
#
# class Battery():
#     def __init__(self, battery_size=70):
#         self.battery_size = battery_size
#
#     def describe_battery(self):
#         """打印一条描述电瓶容量的消息"""
#         print("This car has a " + str(self.battery_size) + '-kWh battery.')
#
#     def get_range(self):
#         """打印一条信息，指出电瓶的续航里程"""
#         if self.battery_size == 70:
#             range = 240
#         elif self.battery_size == 85:
#             range = 270
#
#         message = "This car can go approximately " + str(range)
#         message += " miles on a full charge."
#         print(message)
#
#
# class ElectricCar(Car):
#     """电动汽车的独特之处"""
#
#     def __init__(self, make, model, year):
#         """初始化父类的属性"""
#         # super函数将父类的所有属性与方法给予子类
#         super().__init__(make, model, year)
#         self.battery = Battery()  # 将一个类单独提取出来作为实例
#
#     def fill_gas_tank(self):
#         """电动汽车没有油箱"""
#         print("This car doesn't need a gas tank!")
#
#
# my_tesla = ElectricCar('tesla', 'model s', 2016)
# print(my_tesla.get_descriptive_name())
# my_tesla.battery.describe_battery()
# my_tesla.battery.get_range()
##########################################################################
# # 习题9-6
# print('习题9-6')
#
#
# class Restaurant:
#     def __init__(self, restaurant_name, cuisine_type):
#         self.restaurant_name = restaurant_name
#         self.cuisine_type = cuisine_type
#         self.number_served = 0
#
#     def describe_restaurant(self):
#         print("餐馆的名字为: " + self.restaurant_name.title() + "，空座为: "
#               + str(self.cuisine_type) + '.'
#               + "这家餐厅有" + str(self.number_served) + '人来吃过！')
#         self.open_restaurant()
#
#     def open_restaurant(self):
#         print("该餐厅正在营业中，欢迎前来就餐！")
#
#     def increment_number_served(self, invalue):
#         if invalue > 0:
#             print("本餐厅预计可能接待人数上限" + str(invalue))
#         else:
#             print("不可以输入负数！")
#
#
# class IceCreamStand(Restaurant):
#
#     def __init__(self, restaurant_name, cuisine_type, flavors):
#         super().__init__(restaurant_name, cuisine_type)
#         self.flavors = flavors
#
#     def show_flavors(self):
#         print("本店现有冰淇淋口味：" + str(self.flavors))
#
#
# icecreamstand = IceCreamStand("冰淇淋小店", 25, ['liulian','shizi', 'egg'])
# icecreamstand.describe_restaurant()
# icecreamstand.show_flavors()
##########################################################################
# # 习题9-7
# print('习题9-7')
#
#
# class User():
#     def __init__(self, first_name, last_name, gender, age):
#         self.first_name = first_name
#         self.last_name = last_name
#         self.gender = gender
#         self.age = age
#         self.login_attempts = 0
#
#     def describe_user(self):
#         print("这个人的全名是：" + self.first_name.title()
#               + self.last_name.title() + ', 他的性别是：' + self.gender
#               + ", 他的年龄是：" + str(self.age) + ".")
#
#     def greet_user(self):
#         print(self.first_name.title() + self.last_name.title()
#               + ", 非常感谢你给予真实有效的信息！")
#
#     def increment_login_attempts(self):
#         self.login_attempts += 1
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
#     def reset_login_attempts(self):
#         self.login_attempts = 0
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
# class Admin(User):
#
#     def __init__(self, first_name, last_name, gender, age,
#                  privileges=["can add post", "can delete post", "can ban user"])\
#             :
#         super().__init__(first_name, last_name, gender, age)
#         self.privileges = privileges
#
#     def show_privileges(self):
#         print('管理员权限为' + str(self.privileges) + '!')
#
#
#
# admin = Admin('李', '华', '男', 26)
# admin.show_privileges()
##########################################################################
# # 习题9-8
# print('习题9-8')
#
#
# class User():
#     def __init__(self, first_name, last_name, gender, age):
#         self.first_name = first_name
#         self.last_name = last_name
#         self.gender = gender
#         self.age = age
#         self.login_attempts = 0
#
#     def describe_user(self):
#         print("这个人的全名是：" + self.first_name.title()
#               + self.last_name.title() + ', 他的性别是：' + self.gender
#               + ", 他的年龄是：" + str(self.age) + ".")
#
#     def greet_user(self):
#         print(self.first_name.title() + self.last_name.title()
#               + ", 非常感谢你给予真实有效的信息！")
#
#     def increment_login_attempts(self):
#         self.login_attempts += 1
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
#     def reset_login_attempts(self):
#         self.login_attempts = 0
#         print("登录次数为：" + str(self.login_attempts) + '.')
#
#
# class Privileges():
#
#     def __init__(self,
#                  privileges=["can add post", "can delete post", "can ban user"])\
#             :
#         self.privileges = privileges
#
#     def show_privileges(self):
#         print('管理员权限为' + str(self.privileges) + '!')
#
#
# class Admin(User):
#
#     def __init__(self, first_name, last_name, gender, age,):
#         super().__init__(first_name, last_name, gender, age)
#         self.privileges = Privileges()
#
#
# admin = Admin('李', '华', '男', 26)
# admin.privileges.show_privileges()
##########################################################################
# 习题9-9
print('习题9-9')


class Car():
    """一次模拟汽车的简单尝试"""

    def __init__(self, make, model, year):
        """初始化描述汽车的属性"""
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0
        self.gas_tank = 0

    def get_descriptive_name(self):
        """返回整洁的描述性信息"""
        long_name = str(self.year) + ' ' + self.make + ' ' + self.model
        return long_name.title()

    def read_odometer(self):
        """打印一条指出汽车里程的消息"""
        print("This car has " + str(self.odometer_reading) + ' miles on it.')

    def update_odometer(self, milage):  # 通过方法更新数值
        """
        将里程表读数设置为指定的值
        禁止将里程表读数往回调
        """
        if milage >= self.odometer_reading:
            self.odometer_reading = milage
        else:
            print("You can't roll back an odometer!")

    def increment_odometer(self, miles):
        """将里程表读数增加指定的量"""
        self.odometer_reading += miles

    def fill_gas_tank(self):
        self.gas_tank = 1000
        print("This car's gas is " + str(self.gas_tank) + "!")


class Battery():
    def __init__(self, battery_size=70):
        self.battery_size = battery_size

    def describe_battery(self):
        """打印一条描述电瓶容量的消息"""
        print("This car has a " + str(self.battery_size) + '-kWh battery.')

    def get_range(self):
        """打印一条信息，指出电瓶的续航里程"""
        if self.battery_size == 70:
            range = 240
        elif self.battery_size == 85:
            range = 270

        message = "This car can go approximately " + str(range)
        message += " miles on a full charge."
        print(message)

    def upgrade_battery(self):
        if self.battery_size != 85:
            self.battery_size = 85


class ElectricCar(Car):
    """电动汽车的独特之处"""

    def __init__(self, make, model, year):
        """初始化父类的属性"""
        # super函数将父类的所有属性与方法给予子类
        super().__init__(make, model, year)
        self.battery = Battery()  # 将一个类单独提取出来作为实例

    def fill_gas_tank(self):
        """电动汽车没有油箱"""
        print("This car doesn't need a gas tank!")



my_tesla = ElectricCar('tesla', 'model s', 2016)
print(my_tesla.get_descriptive_name())
my_tesla.battery.describe_battery()
my_tesla.battery.upgrade_battery()
my_tesla.battery.describe_battery()
