import pygame

from setting import Settings
from ship import Ship
import game_functions as gf
from pygame.sprite import Group

def run_game():
    # 初始化游戏并创建一个屏幕对象
    pygame.init()
    ai_setting = Settings()
    screen = pygame.display.set_mode((ai_setting.screen_width,
                                      ai_setting.screen_height))  # 创建显示窗口
    pygame.display.set_caption("Alien Invasion")

    # 创建一艘飞船
    ship = Ship(ai_setting, screen)
    # 创建一个用于储存子弹的编组
    bullets = Group()
    # 开始游戏的主循环
    while True:
        gf.check_events(ai_setting, screen, ship, bullets)  # 键盘事件
        ship.update()  # 飞船更新
        gf.update_bullets(bullets, ai_setting)  # 子弹更新
        gf.update_screen(ai_setting, screen, ship, bullets)  # 画面更新


if __name__ == '__main__':
    run_game()
