import pygame
from game_setting import Settings
from hand import Hand
from boll import Boll
import game_functions as gf
from game_stats import Game_Stats


def run_game():
    pygame.init()
    gm_setting = Settings()  # 将初始化参数实例化
    screen = pygame.display.set_mode((gm_setting.screen_width,
                                      gm_setting.screen_height))
    pygame.display.set_caption("打球游戏")

    stats = Game_Stats(gm_setting)
    # 创建一个手和一组球
    hands = Hand(gm_setting, screen)
    bolls = Boll(gm_setting, screen)

    while True:
        gf.check_events(hands)
        if stats.game_active:
            hands.update()  # 手移动
            gf.update_boll(hands, bolls, gm_setting, stats)  # 球位置更新
        gf.update_screen(gm_setting, screen, hands, bolls)


if __name__ == '__main__':
    run_game()
