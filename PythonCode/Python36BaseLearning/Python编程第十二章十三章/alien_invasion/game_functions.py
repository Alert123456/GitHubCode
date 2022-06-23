import sys

import pygame
from bullet import Bullet
from alien import Alien
from random import randint


# 习题12-3 加入上下按键和边缘检测
def check_keydown_events(event, ai_settings, screen, ship, bullets):
    """响应按下"""
    if event.key == pygame.K_RIGHT:  # 按下键盘右键
        ship.moving_right = True  # 置位移动标志
    elif event.key == pygame.K_LEFT:  # 按下键盘左键
        ship.moving_left = True  # 置位移动标志
    elif event.key == pygame.K_UP:  # 按下键盘上键
        ship.moving_up = True  # 置位移动标志
    elif event.key == pygame.K_DOWN:  # 按下键盘下键
        ship.moving_down = True  # 置位移动标志
    # 子弹设计方向
    elif event.key == pygame.K_SPACE or event.key == pygame.K_a \
            or event.key == pygame.K_d:
        if event.key == pygame.K_a:
            fire_direction = 'left'
        elif event.key == pygame.K_d:
            fire_direction = 'right'
        else:
            fire_direction = 'up'
        fire_bullet(ai_settings, screen, ship, bullets, fire_direction)
    # 退出快捷键q
    elif event.key == pygame.K_q:
        sys.exit()


def check_keyup_events(event, ship):
    """响应松开"""
    if event.key == pygame.K_RIGHT:  # 按下键盘右键
        ship.moving_right = False  # 复位移动标志
    elif event.key == pygame.K_LEFT:  # 按下键盘左键
        ship.moving_left = False  # 复位移动标志
    elif event.key == pygame.K_UP:  # 按下键盘上键
        ship.moving_up = False  # 复位移动标志
    elif event.key == pygame.K_DOWN:  # 按下键盘下键
        ship.moving_down = False  # 复位移动标志


def check_events(ai_settings, screen, ship, bullets):
    """响应按键和鼠标事件"""
    for event in pygame.event.get():
        if event.type == pygame.QUIT:  # 按下关闭按钮，关闭程序
            sys.exit()
        elif event.type == pygame.KEYDOWN:  # 键盘按下
            check_keydown_events(event, ai_settings, screen, ship, bullets)
            # event.key为数字,按照pygame的枚举显示 # 习题12-4
            # print("按下的键值：" + str(event.key))
        elif event.type == pygame.KEYUP:  # 键盘松开
            check_keyup_events(event, ship)


def update_screen(ai_setting, screen, ship, aliens, bullets):
    """更新屏幕上的图像，并切换到新屏幕"""
    # 每次循环时都重绘屏幕
    screen.fill(ai_setting.bg_color)
    # 在飞船和外星人后边重绘所有子弹
    for bullet in bullets.sprites():
        bullet.draw_bullet()
    ship.blitme()  # 绘制飞船
    aliens.draw(screen)  # 绘制外星人群
    # 让最近绘制的屏幕可见
    pygame.display.flip()


def update_bullets(ai_settings, screen, ship, aliens, bullets, ai_sitting):
    """更新子弹的位置，并删除已消失的子弹"""
    # 更新子弹的位置
    bullets.update()
    # 删除已消失的子弹
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0:
            bullets.remove(bullet)
        if bullet.rect.left <= 0:
            bullets.remove(bullet)
        if bullet.rect.right >= ai_sitting.screen_width:
            bullets.remove(bullet)

    check_bullet_alien_collisions(ai_settings, screen, ship, aliens, bullets)


def check_bullet_alien_collisions(ai_settings, screen, ship, aliens, bullets):
    """响应子弹和外星人的碰撞"""
    # 检查是否有子弹击中外星人
    # 如果是这样，就删除相应的子弹和外星人
    collisions = pygame.sprite.groupcollide(bullets, aliens, True, True)

    if len(aliens) == 0:
        # 删除现有的子弹并新建一群外星人
        bullets.empty()  # 删除编组中余下的所有精灵，从而删除现有的所有子弹
        create_fleet(ai_settings, screen, ship, aliens)


def fire_bullet(ai_settings, screen, ship, bullets, fire_direction='up'):
    """如果还没到达限制，就发射一颗子弹"""
    # 创建新子弹，并将其加入到编组bullets中
    if len(bullets) < ai_settings.bullets_allowed:
        new_bullet = Bullet(ai_settings, screen, ship, fire_direction)
        bullets.add(new_bullet)


def get_number_aliens_x(ai_settings, alien_width):
    """计算每行可容纳多少个外星人"""
    available_space_x = ai_settings.screen_width - 2 * alien_width
    number_aliens_x = int(available_space_x / (2 * alien_width))
    return number_aliens_x


def get_number_rows(ai_settings, ship_height, alien_height):
    """计算屏幕可容纳多少行外星人"""
    available_space_y = (ai_settings.screen_height - (3 * alien_height)
                         - ship_height)
    number_rows = int(available_space_y / (2 * alien_height))
    return number_rows


def create_alien(ai_settings, screen, aliens, alien_number, row_number):
    alien = Alien(ai_settings, screen)
    alien.rect.x = alien.rect.width + 2 * alien.rect.width * alien_number
    alien.rect.y = alien.rect.height + 2 * alien.rect.height * row_number
    aliens.add(alien)


def create_fleet(ai_settings, screen, ship, aliens):
    """创建外星人群"""
    # 创建一个外星人，并计算一行可容纳多少个外星人
    # 外星人间距为外星人宽度
    alien = Alien(ai_settings, screen)
    number_aliens_x = get_number_aliens_x(ai_settings, alien.rect.width)
    number_rows = get_number_rows(ai_settings, ship.rect.height,
                                  alien.rect.height)
    # 创建第一行外星人
    for row_number in range(number_rows):
        # 创建一个外星人并将其加入当前列
        for alien_number in range(number_aliens_x):
            # 创建一个外星人并将其加入当前行
            create_alien(ai_settings, screen, aliens, alien_number,
                         row_number)

    # # 习题13-2
    # alien_number = randint(0, number_aliens_x)
    # row_number = randint(0, number_rows)
    # create_alien(ai_settings, screen, aliens, alien_number,
    #              row_number)


def check_fleet_edges(ai_settings, aliens):
    """有外星人到达边缘时采取相应的措施"""
    for alien in aliens.sprites():
        if alien.check_edges():
            change_fleet_direction(ai_settings, aliens)
            break


def change_fleet_direction(ai_settings, aliens):
    """将整群外星人下移，并改变他们的方向"""
    for alien in aliens.sprites():
        # 向下移动ai_settings.fleet_drop_speed像素，然后变换方向运动
        alien.rect.y += ai_settings.fleet_drop_speed
    ai_settings.fleet_direction *= -1


def update_aliens(ai_settings, aliens):
    """
    检查是否有外星人位于屏幕边缘，并更新外星人群中所有外星人的位置
    """
    check_fleet_edges(ai_settings, aliens)
    aliens.update()
