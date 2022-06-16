import pygame


class Ship():
    """用来控制飞船的行为"""
    def __init__(self, screen):
        """初始化飞船并设置其初始位置"""
        self.screen = screen

        # 加载飞船图像并获取其外接矩形
        self.image = pygame.image.load('images/ship.bmp')
        self.rect = self.image.get_rect()  # 将图片变成矩形
        self.screen_rect = screen.get_rect()  # 图片的矩形

        # 将每艘新飞船放在屏幕底部中央
        self.rect.centerx = self.screen_rect.centerx  # 飞船中心X坐标
        self.rect.bottom = self.screen_rect.bottom  # 飞船下边缘Y坐标

    def blitme(self):
        """指定位置绘制飞船"""
        self.screen.blit(self.image, self.rect)
