class Settings():
    """储存抓球游戏的所有参数"""

    def __init__(self):
        # 屏幕设置
        self.screen_width = 1200
        self.screen_height = 800
        self.color = (230, 230, 230)
        # 球的移动速度
        self.boll_speed = 1

        # 手的基本设置
        self.hand_width = 50
        self.hand_height = 10
        self.hand_color = (0, 255, 255)
        self.hand_limit = 3
