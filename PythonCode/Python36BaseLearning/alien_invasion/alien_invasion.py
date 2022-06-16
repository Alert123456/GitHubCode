import sys

import pygame

from setting import Settings
from ship import Ship


def run_game():
    # 初始化游戏并创建一个屏幕对象
    pygame.init()
    ai_setting = Settings()
    screen = pygame.display.set_mode((ai_setting.screen_width,
                                      ai_setting.screen_height))  # 创建显示窗口
    pygame.display.set_caption("Alien Invasion")

    # 创建一艘飞船
    ship = Ship(screen)

    # 开始游戏的主循环
    while True:

        # 监控键盘和鼠标事件
        for event in pygame.event.get():  # 所有键盘和鼠标事件
            if event.type == pygame.QUIT:  # 单击窗口的关闭按钮退出游戏
                sys.exit()

        # 每次循环时都重绘屏幕
        screen.fill(ai_setting.bg_color)
        ship.blitme()  # 令飞船显示出来！

        # 让最近绘制的屏幕可见
        pygame.display.flip()


if __name__ == '__main__':
    run_game()
