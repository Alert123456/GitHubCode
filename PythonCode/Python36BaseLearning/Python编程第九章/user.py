"""一个描述用户的类"""


class User():
    def __init__(self, first_name, last_name, gender, age):
        self.first_name = first_name
        self.last_name = last_name
        self.gender = gender
        self.age = age
        self.login_attempts = 0

    def describe_user(self):
        print("这个人的全名是：" + self.first_name.title()
              + self.last_name.title() + ', 他的性别是：' + self.gender
              + ", 他的年龄是：" + str(self.age) + ".")

    def greet_user(self):
        print(self.first_name.title() + self.last_name.title()
              + ", 非常感谢你给予真实有效的信息！")

    def increment_login_attempts(self):
        self.login_attempts += 1
        print("登录次数为：" + str(self.login_attempts) + '.')

    def reset_login_attempts(self):
        self.login_attempts = 0
        print("登录次数为：" + str(self.login_attempts) + '.')


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