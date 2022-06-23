import pygame


class Hand():
    """创建一个手的类"""

    def __init__(self, setting, screen):
        """在底部创建一个手"""
        super(Hand, self).__init__()
        self.screen = screen
        self.setting = setting
        self.color = setting.hand_color
        # 更新手的位置
        self.rect = pygame.Rect(0, 0, setting.hand_width, setting.hand_height)
        self.screen_rect = screen.get_rect()
        # 将手放到底部中间
        self.rect.centerx = self.screen_rect.centerx
        self.rect.bottom = self.screen_rect.bottom

        # 储存用小数表示手的位置
        self.center = float(self.rect.centerx)
        self.centerY = float(self.rect.bottom)
        # 移动标志
        self.moving_right = False
        self.moving_left = False

    def update(self):
        if self.moving_left and self.rect.left > 0:
            self.center -= self.setting.boll_speed
        if self.moving_right and self.rect.right < self.screen_rect.right:
            self.center += self.setting.boll_speed
        self.rect.centerx = self.center

        # print("moving_left "+ str(self.moving_left) + str(self.rect.left))
    def draw_hand(self):
        """指定位置绘制手"""
        pygame.draw.rect(self.screen, self.color, self.rect)
