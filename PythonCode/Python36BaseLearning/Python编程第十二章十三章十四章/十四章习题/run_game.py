import pygame
import sys
from game_setting import Settings
from ship import Ship
from marker import Marker
import game_functions as gf
from stats import GameStats
from pygame.sprite import Group
from button import Button


def run_game():
    # 初始化游戏并创建一个屏幕对象
    pygame.init()
    ai_setting = Settings()
    # 创建显示窗口
    screen = pygame.display.set_mode((ai_setting.screen_width,
                                      ai_setting.screen_height))
    pygame.display.set_caption("飞船射击游戏")

    # 创建Play按钮
    play_button = Button(ai_setting, screen, "Play")

    # 创建一个用于储存游戏统计信息的实例
    stats = GameStats(ai_setting)

    # 创建一艘飞船、子弹编组和靶子
    ship = Ship(ai_setting, screen)
    marker = Marker(ai_setting, screen)
    bullets = Group()

    # 开始游戏的主循环
    while True:
        # 键盘事件
        gf.check_events(ai_setting, screen, stats, play_button, ship, bullets)
        if stats.game_active:
            ship.update()  # 飞船更新
            gf.update_marker(ai_setting, screen, ship, bullets, marker)
            # 子弹更新
            gf.update_bullets(ai_setting, stats, screen, ship, marker, bullets)

        gf.update_screen(ai_setting, screen, ship, stats, bullets, marker,
                         play_button)  # 画面更新

if __name__ == '__main__':
    run_game()