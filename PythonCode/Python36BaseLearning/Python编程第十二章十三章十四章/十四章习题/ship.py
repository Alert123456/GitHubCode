import pygame


class Ship():
    """用来控制飞船的行为"""

    def __init__(self, ai_settings, screen):
        """初始化飞船并设置其初始位置"""
        self.screen = screen
        self.ai_settings = ai_settings

        # 加载飞船图像并获取其外接矩形
        self.image = pygame.image.load('images/ship.bmp')
        self.rect = self.image.get_rect()  # 将图片变成矩形
        self.screen_rect = screen.get_rect()  # 画面变成矩形

        # 将每艘新飞船放在屏幕底部中央
        self.rect.x = 0  # 飞船中心X坐标
        self.rect.centery = self.screen_rect.centery  # 飞船下边缘Y坐标

        # 在飞船的属性center中储存小数值
        self.center = float(self.rect.x)
        self.centerY = float(self.rect.centery)

        # 移动标志
        self.moving_up = False
        self.moving_down = False

    def update(self):
        """根据移动标志调整飞船的位置"""
        # 更新飞船的center值，而不是rect
        # self.moving_right标志为True 并且 飞船右坐标 < 画面右坐标
        if self.moving_up and self.rect.top > 0:
            self.centerY -= self.ai_settings.ship_speed_factor
        if self.moving_down and self.rect.bottom < self.screen_rect.bottom:
            self.centerY += self.ai_settings.ship_speed_factor

        # 将存在小数的center的整数传递到self.rect.centerx中
        self.rect.centery = self.centerY

    def blitme(self):
        """指定位置绘制飞船"""
        self.screen.blit(self.image, self.rect)

    def center_ship(self):
        """让飞船在屏幕上居中"""
        self.center = self.rect.x
        self.centerY = self.screen_rect.centery