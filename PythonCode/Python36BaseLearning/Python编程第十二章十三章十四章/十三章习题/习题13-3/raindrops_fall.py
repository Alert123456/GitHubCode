import pygame
from pygame.sprite import Sprite


class Raindrops_fall(Sprite):

    def __init__(self, settings, screen):
        super(Raindrops_fall, self).__init__()
        self.settings = settings
        self.screen = screen

        # 加载雨滴图片
        self.image = pygame.image.load('images/raindrop.bmp')
        self.rect = self.image.get_rect()

        # 雨滴在左上角位置
        self.rect.x = self.rect.width
        self.rect.y = self.rect.height

        # 储存雨滴具体位置
        self.x = float(self.rect.x)
        self.y = float(self.rect.y)

    def update(self):
        """雨滴向下落"""
        self.rect.y += self.settings.raindrop_fall_speed

    def bottom_edge(self):
        screen_rect = self.screen.get_rect()
        if self.rect.top >= screen_rect.bottom:
            return True