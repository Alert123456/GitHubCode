import pygame
from pygame.sprite import Sprite


class Bullet(Sprite):  # 将游戏的相关元素编组管理
    """一个对飞船发射的子弹进行管理的类"""

    def __init__(self, ai_settings, screen, ship):
        """在飞船所处的位置创建一个子弹对象"""
        super(Bullet, self).__init__()
        self.screen = screen
        # 在(0,0)处创建一个表示子弹的矩形，再设置正确的位置
        # 更新子弹方向
        self.rect = pygame.Rect(0, 0, ai_settings.bullet_width,
                                ai_settings.bullet_height)
        self.rect.x = ship.rect.right
        self.rect.y = ship.rect.centery

        # 储存用小数表示的子弹位置
        self.y = float(self.rect.y)
        self.x = float(self.rect.x)
        # 子弹基本属性：颜色与移动速度
        self.color = ai_settings.bullet_color
        self.speed_factor = ai_settings.bullet_speed_factor

    def update(self):  # 更新子弹位置
        """移动子弹"""
        # 更新表示子弹位置的最小值
        self.x += self.speed_factor

        # 更新表示子弹的rect的位置
        self.rect.y = self.y
        self.rect.x = self.x

    def draw_bullet(self):
        """在屏幕上绘制子弹"""
        pygame.draw.rect(self.screen, self.color, self.rect)

