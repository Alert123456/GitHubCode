import pygame
from random import randint


class Boll():
    """表示球的类"""

    def __init__(self, settings, screen):
        """初始化球的类与起始位置"""
        super(Boll, self).__init__()
        self.screen = screen
        self.settings = settings

        # 加载球的图片并设置rect属性，图片先用外星人代替
        self.image = pygame.image.load('images/alien.bmp')
        self.rect = self.image.get_rect()

        # 球在屏幕上端的随机位置出现(X坐标随机，Y坐标顶头)
        self.rect.x = randint(0, settings.screen_width)
        self.rect.y = 0

    def check_edges(self):
        """如果球出屏幕范围则返回True"""
        screen_rect = self.screen.get_rect()
        if self.rect.top >= screen_rect.buttom:
            return True

    def update(self):
        """球向下移动"""
        self.rect.y += self.settings.boll_speed


    def blit_me(self):
        """指定位置绘制球"""
        self.screen.blit(self.image, self.rect)

    def creat_boll(self, settings):
        # 球在屏幕上端的随机位置出现(X坐标随机，Y坐标顶头)
        self.rect.x = randint(0, settings.screen_width)
        self.rect.y = 0
