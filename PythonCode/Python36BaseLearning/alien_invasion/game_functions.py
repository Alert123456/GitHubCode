import sys

import pygame
from bullet import Bullet


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


def update_screen(ai_setting, screen, ship, bullets):
    """更新屏幕上的图像，并切换到新屏幕"""
    # 每次循环时都重绘屏幕
    screen.fill(ai_setting.bg_color)
    # 在飞船和外星人后边重绘所有子弹
    for bullet in bullets.sprites():
        bullet.draw_bullet()
    ship.blitme()
    # 让最近绘制的屏幕可见
    pygame.display.flip()


def update_bullets(bullets, ai_sitting):
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
    print(len(bullets))


def fire_bullet(ai_settings, screen, ship, bullets, fire_direction = 'up'):
    """如果还没到达限制，就发射一颗子弹"""
    # 创建新子弹，并将其加入到编组bullets中
    if len(bullets) < ai_settings.bullets_allowed:
        new_bullet = Bullet(ai_settings, screen, ship, fire_direction)
        bullets.add(new_bullet)
