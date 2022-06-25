class Game_Stats():
    """统计手未抓住球次数"""

    def __init__(self, setting):
        self.setting = setting
        self.reset_stats()

        # 让游戏一开始处于非活动状态
        self.game_active = False

    def reset_stats(self):
        """初始化游戏运行期间可能变化的统计信息"""
        self.ship_left = self.setting.hand_limit
