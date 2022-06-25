import sys

import pygame
from time import sleep
from bullet import Bullet


def check_keydown_events(event, ai_settings, screen, ship, bullets):
    """响应按下"""
    if event.key == pygame.K_UP:  # 按下键盘上键
        ship.moving_up = True  # 置位移动标志
    elif event.key == pygame.K_DOWN:  # 按下键盘下键
        ship.moving_down = True  # 置位移动标志
    elif event.key == pygame.K_SPACE:
        fire_bullet(ai_settings, screen, ship, bullets)
    # 退出快捷键q
    elif event.key == pygame.K_q:
        sys.exit()
    elif event.key == pygame.K_p:
        ai_settings.keyboard_play = True


def check_keyup_events(event, ai_setting, ship):
    """响应松开"""
    if event.key == pygame.K_UP:  # 按下键盘上键
        ship.moving_up = False  # 复位移动标志
    elif event.key == pygame.K_DOWN:  # 按下键盘下键
        ship.moving_down = False  # 复位移动标志
    elif event.key == pygame.K_p:
        ai_setting.keyboard_play = False


def check_events(ai_setting, screen, stats, play_button, ship, bullets):
    """响应按键和鼠标事件"""
    for event in pygame.event.get():
        if event.type == pygame.QUIT:  # 按下关闭按钮，关闭程序
            sys.exit()
        elif event.type == pygame.KEYDOWN:  # 键盘按下
            check_keydown_events(event, ai_setting, screen, ship, bullets)
            # event.key为数字,按照pygame的枚举显示 # 习题12-4
            # print("按下的键值：" + str(event.key))
        elif event.type == pygame.KEYUP:  # 键盘松开
            check_keyup_events(event, ai_setting, ship)
        elif event.type == pygame.MOUSEBUTTONDOWN:
            mouse_x, mouse_y = pygame.mouse.get_pos()
            check_play_button(ai_setting, screen, stats, play_button, ship,
                              bullets, mouse_x, mouse_y)
        check_play_keyboard(ai_setting, screen, stats, ship, bullets)


def fire_bullet(ai_settings, screen, ship, bullets):
    """发射一颗子弹"""
    num_bullet = Bullet(ai_settings, screen, ship)
    bullets.add(num_bullet)


def check_play_button(ai_setting, screen, stats, play_button, ship,
                      bullets, mouse_x, mouse_y):
    """在玩家单击Play按钮时开始新游戏"""
    # 判断是否点击到这个对象的rect内
    button_clicked = play_button.rect.collidepoint(mouse_x, mouse_y)
    # 加入键盘开始游戏按键判断
    # 如果 stats.game_active = True 不进行重置
    if button_clicked and not stats.game_active:
        # 隐藏光标
        pygame.mouse.set_visible(False)

        # 重置游戏统计信息
        stats.reset_stats()  # 重置统计信息
        stats.game_active = True

        # 清空子弹列表
        bullets.empty()

        # 让飞船居中
        ship.center_ship()


def check_play_keyboard(ai_setting, screen, stats, ship, bullets):
    """在玩家单击Play按钮时开始新游戏 习题14-4 加入键盘p开始按键"""
    # 加入键盘开始游戏按键判断
    # 如果 stats.game_active = True 不进行重置
    if ai_setting.keyboard_play and not stats.game_active:
        # 隐藏光标
        pygame.mouse.set_visible(False)

        # 重置游戏统计信息
        stats.reset_stats()  # 重置统计信息
        stats.game_active = True

        # 清空外星人列表和子弹列表
        bullets.empty()

        # 让飞船居中
        ship.center_ship()


def noship_hit(ai_setting, stats, screen, ship, bullets):
    """响应未被子弹撞到的标靶"""
    if stats.ships_left > 0:
        # 将ship_left 减1
        stats.ships_left -= 1
        # 暂停
        sleep(0.5)
    else:
        stats.game_active = False
        pygame.mouse.set_visible(True)


def update_screen(ai_setting, screen, ship, stats, bullets, marker,
                  play_button):
    """更新屏幕上的图像，并切换到新屏幕"""
    # 每次循环时都重绘屏幕
    screen.fill(ai_setting.screen_color)
    # 在飞船和外星人后边重绘所有子弹
    if stats.game_active:
        for bullet in bullets.sprites():
            bullet.draw_bullet()
    ship.blitme()  # 绘制飞船
    marker.draw_marker()  # 绘制靶子
    # 如果游戏处于非活动状态，就绘制Play按钮
    if not stats.game_active:
        play_button.draw_button()
    # 让最近绘制的屏幕可见
    pygame.display.flip()


def update_bullets(ai_settings, stats, screen, ship, marker, bullets):
    """更新子弹的位置，并删除已消失的子弹"""
    # 更新子弹的位置
    bullets.update()
    # 删除已消失的子弹
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0 or bullet.rect.left <= 0 \
                or bullet.rect.right >= ai_settings.screen_width:
            noship_hit(ai_settings, stats, screen, ship, bullets)
            bullets.remove(bullet)
    ship_hit = pygame.sprite.spritecollide(marker, bullets, True)


def update_marker(ai_settings, screen, ship, bullets, marker):
    if marker.check_edges():
        ai_settings.fleet_direction *= -1
    marker.update()
