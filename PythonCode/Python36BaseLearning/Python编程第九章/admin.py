"""一个描述权限的类"""

from user import User

class Privileges():

    def __init__(self,
                 privileges=["can add post", "can delete post", "can ban user"])\
            :
        self.privileges = privileges

    def show_privileges(self):
        print('管理员权限为' + str(self.privileges) + '!')


class Admin(User):

    def __init__(self, first_name, last_name, gender, age,):
        super().__init__(first_name, last_name, gender, age)
        self.privileges = Privileges()