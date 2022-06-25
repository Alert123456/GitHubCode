import pygame

from setting import Setting
import sys
from pygame.sprite import Group
import game_functions as gf
from raindrops_fall import Raindrops_fall


def run_game():
    # 初始化游戏并创建一个屏幕对象
    pygame.init()
    setting = Setting()
    screen = pygame.display.set_mode((setting.screen_width,
                                      setting.screen_height))
    pygame.display.set_caption("雨滴下落！")

    # 创建雨滴下落编组
    raindrops = Group()

    # 创建雨滴落下群
    # 刚做出雨滴到底删除
    gf.create_raindrops(setting, raindrops, screen)

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:  # 按下关闭按钮，关闭程序
                sys.exit()

        for raindrop_fall in raindrops.sprites():
            flag = raindrop_fall.bottom_edge()
            if flag:
                gf.create_one_raindrops(setting, raindrops, screen)
                break
                # break的妙用，将只要有一个对象到达边缘创建一行，然后退出这个循环
                # 之后代码将这行逐一删除，flag置为False直到碰到下一行为True

        gf.delete_raindrops(setting, raindrops)
        print(len(raindrops))
        gf.update_raindrops(raindrops)
        gf.update_screen(setting, screen, raindrops)


if __name__ == '__main__':
    run_game()
