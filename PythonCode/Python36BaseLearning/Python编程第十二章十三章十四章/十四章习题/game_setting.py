import pygame
class Settings():
    """储存飞船射击标靶的所有设置的类"""

    def __init__(self):
        """初始化游戏的静态设置"""
        # 屏幕设置
        self.screen_width = 1200
        self.screen_height = 800
        self.screen_color = (230, 230, 230)
        # 飞船的设置
        # self.ship_speed_factor = 1.5
        self.ship_limit = 3
        # 子弹设置
        # self.bullet_speed_factor = 1
        self.bullet_width = 15
        self.bullet_height = 3
        self.bullet_color = (60, 60, 60)
        # 靶子设置
        # self.marker_speed_factor = 1
        self.marker_width = 10
        self.marker_height = 50
        self.marker_color = pygame.Color("green")
        self.fleet_direction = 1
        # 键盘开始游戏
        self.keyboard_play = False

        # 以何种速度加快游戏
        self.speedup_scale = 1.1
        self.initialize_dynamic_settings()

        # 速度限制
        self.ship_speed_factor_limit = 5
        self.bullet_speed_factor_limit = 5
        self.marker_speed_factor_limit = 5

    def initialize_dynamic_settings(self):
        """游戏的动态设置"""
        self.ship_speed_factor = 1.5
        self.bullet_speed_factor = 1
        self.marker_speed_factor = 0

    def increase_game_speed(self):
        if self.ship_speed_factor < self.ship_speed_factor_limit:
            self.ship_speed_factor *= self.speedup_scale
        if self.bullet_speed_factor < self.bullet_speed_factor_limit:
            self.bullet_speed_factor *= self.speedup_scale
        if self.marker_speed_factor < self.marker_speed_factor_limit:
            self.marker_speed_factor *= self.speedup_scale
