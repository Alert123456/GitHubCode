import pygame
from raindrops_fall import Raindrops_fall


def get_number_raindrop_x(setting, raindrop_width):
    """计算每行容纳多少雨滴"""
    available_space_x = setting.screen_width - 2 * raindrop_width
    number_raindrop_x = int(available_space_x / (2 * raindrop_width))
    return number_raindrop_x


def create_raindrop(setting, raindrops, raindrop_number, raindrop_row_number,
                    screen):
    raindrop = Raindrops_fall(setting, screen)
    raindrop.rect.x = raindrop.rect.width + 2 * raindrop_number \
                      * raindrop.rect.width
    raindrop.rect.y = raindrop.rect.height + 2 * raindrop_row_number \
                      * raindrop.rect.height
    raindrops.add(raindrop)


def number_raindrop(setting, screen):
    raindrop = Raindrops_fall(setting, screen)
    number_raindrop_x = get_number_raindrop_x(setting, raindrop.rect.width)
    return number_raindrop_x


def create_one_raindrops(setting, raindrops, screen):
    """创建雨滴群"""
    number_raindrop_x = number_raindrop(setting, screen)
    for raindrop_row_number in range(1):
        for raindrop_number in range(number_raindrop_x):
            create_raindrop(setting, raindrops, raindrop_number,
                            raindrop_row_number, screen)


def delete_raindrops(setting, raindrops):
    # 从组中取出一系列object，通过 for 取出一个 object
    for raindrop in raindrops.copy():
        if raindrop.rect.top >= setting.screen_height:
            raindrops.remove(raindrop)


def create_raindrops(setting, raindrops, screen):
    """创建雨滴群"""
    number_raindrop_x = number_raindrop(setting, screen)
    for raindrop_row_number in range(3):
        for raindrop_number in range(number_raindrop_x):
            create_raindrop(setting, raindrops, raindrop_number,
                            raindrop_row_number, screen)


def update_screen(setting, screen, raindrops):
    """更新画面"""
    # 每次循环都重绘画面
    screen.fill(setting.bg_color)
    raindrops.draw(screen)
    # 让最近绘制的屏幕可见
    pygame.display.flip()


def update_raindrops(raindrops):
    raindrops.update()
