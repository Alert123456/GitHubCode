import pygame

from setting import Settings
from ship import Ship  # 飞船
import game_functions as gf
from pygame.sprite import Group
from game_stats import GameStats
from button import Button


def run_game():
    # 初始化游戏并创建一个屏幕对象
    pygame.init()
    ai_setting = Settings()
    screen = pygame.display.set_mode((ai_setting.screen_width,
                                      ai_setting.screen_height))  # 创建显示窗口
    pygame.display.set_caption("Alien Invasion")

    # 创建Play按钮
    play_button = Button(ai_setting, screen, "Play")

    # 创建一个用于储存游戏统计信息的实例
    stats = GameStats(ai_setting)

    # 创建一艘飞船、子弹编组和外星人编组
    ship = Ship(ai_setting, screen)
    bullets = Group()
    aliens = Group()

    # 创建外星人群
    gf.create_fleet(ai_setting, screen, ship, aliens)

    # 开始游戏的主循环
    while True:
        # 键盘事件
        gf.check_events(ai_setting, screen, stats, play_button, ship, aliens,
                        bullets)
        if stats.game_active:
            ship.update()  # 飞船更新
            # 子弹更新
            gf.update_bullets(ai_setting, screen, ship, aliens, bullets)
            gf.update_aliens(ai_setting, stats, screen, ship, aliens, bullets)

        gf.update_screen(ai_setting, screen, ship, stats, aliens, bullets,
                         play_button)  # 画面更新


if __name__ == '__main__':
    run_game()
