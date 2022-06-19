class Settings():
    """储存《外星人入侵》的所有设置的类"""

    def __init__(self):
        """初始化游戏的设置"""
        # 屏幕设置
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)
        # 两种方式，可以用pygame内置颜色
        # self.bg_color = pygame.Color("blue")
        # 飞船的设置
        self.ship_speed_factor = 1.5
        # 子弹设置
        self.bullet_speed_factor = 1
        self.bullet_width = 3
        self.bullet_height = 15
        self.bullet_color = (60, 60, 60)
        self.bullets_allowed = 3  # 设置最大子弹数
        self.bullets_direction = 'up'  # 设置子弹方向
