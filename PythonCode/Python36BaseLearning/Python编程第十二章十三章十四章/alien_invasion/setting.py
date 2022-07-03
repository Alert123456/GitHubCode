class Settings():
    """储存《外星人入侵》的所有设置的类"""

    def __init__(self):
        """初始化游戏的静态设置"""
        # 屏幕设置
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (230, 230, 230)
        # 两种方式，可以用pygame内置颜色
        # self.bg_color = pygame.Color("blue")
        # 飞船的设置
        # self.ship_speed_factor = 1.5
        self.ship_limit = 3
        # 子弹设置
        # self.bullet_speed_factor = 1
        self.bullet_width = 3
        self.bullet_height = 15
        self.bullet_color = (60, 60, 60)
        self.bullets_allowed = 3000  # 设置最大子弹数
        self.bullets_direction = 'up'  # 设置子弹方向
        # 外星人设置
        # self.alien_speed_factor = 3  # 设置外星人移动速度
        self.fleet_drop_speed = 10  # 下落速度
        # fleet_direction为1表示向右移，为-1表示向左移
        # self.fleet_direction = 1
        # 键盘开始游戏
        self.keyboard_play = False

        # 加快游戏节奏的速度
        self.speedup_scale = 1.1
        # 外星人点数的提高速度
        self.score_scale = 1.5

        self.initialize_dynamic_settings()
        # 文件储存
        self.filename = 'high_score.txt'

    def initialize_dynamic_settings(self):
        """初始化随游戏进行而变化的设置"""
        self.ship_speed_factor = 1.5
        self.bullet_speed_factor = 3
        self.alien_speed_factor = 1

        # fleet_direction 为1表示向右；为-1表示向左
        self.fleet_direction = 1
        # 记分
        self.alien_points = 50

    def increase_speed(self):
        """提高速度设置"""
        self.ship_speed_factor *= self.speedup_scale  # 缓慢增加速度
        self.bullet_speed_factor *= self.speedup_scale
        self.alien_speed_factor *= self.speedup_scale

        self.alien_points = int(self.alien_points * self.score_scale)




