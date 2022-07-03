import sys

import pygame
from bullet import Bullet
from alien import Alien
from random import randint
from time import sleep


# 习题12-3 加入上下按键和边缘检测
def check_keydown_events(event, ai_settings, screen, ship, stats, bullets):
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
        # 将最高分写入文件中，在开始时读取
        save_high_score(ai_settings, stats)
        sys.exit()
    elif event.key == pygame.K_p:
        ai_settings.keyboard_play = True


def check_keyup_events(event, ai_setting, ship):
    """响应松开"""
    if event.key == pygame.K_RIGHT:  # 按下键盘右键
        ship.moving_right = False  # 复位移动标志
    elif event.key == pygame.K_LEFT:  # 按下键盘左键
        ship.moving_left = False  # 复位移动标志
    elif event.key == pygame.K_UP:  # 按下键盘上键
        ship.moving_up = False  # 复位移动标志
    elif event.key == pygame.K_DOWN:  # 按下键盘下键
        ship.moving_down = False  # 复位移动标志
    elif event.key == pygame.K_p:
        ai_setting.keyboard_play = False


def check_events(ai_setting, screen, stats, sb, play_button, ship, aliens,
                 bullets):
    """响应按键和鼠标事件"""
    for event in pygame.event.get():
        if event.type == pygame.QUIT:  # 按下关闭按钮，关闭程序
            save_high_score(ai_setting, stats)  # 记录最高分
            sys.exit()
        elif event.type == pygame.KEYDOWN:  # 键盘按下
            check_keydown_events(event, ai_setting, screen, ship, stats,
                                 bullets)
            # event.key为数字,按照pygame的枚举显示 # 习题12-4
            # print("按下的键值：" + str(event.key))
        elif event.type == pygame.KEYUP:  # 键盘松开
            check_keyup_events(event, ai_setting, ship)
        elif event.type == pygame.MOUSEBUTTONDOWN:
            mouse_x, mouse_y = pygame.mouse.get_pos()
            check_play_button(ai_setting, screen, stats, sb, play_button, ship,
                              aliens, bullets, mouse_x, mouse_y)
        check_play_keyboard(ai_setting, screen, stats, sb, ship, aliens,
                            bullets)


def check_play_button(ai_setting, screen, stats, sb, play_button, ship, aliens,
                      bullets, mouse_x, mouse_y):
    """在玩家单击Play按钮时开始新游戏"""
    # 判断是否点击到这个对象的rect内
    button_clicked = play_button.rect.collidepoint(mouse_x, mouse_y)
    # 加入键盘开始游戏按键判断
    # 如果 stats.game_active = True 不进行重置
    if button_clicked and not stats.game_active:
        # 游戏初始化设置
        play_init_setting(ai_setting, stats, sb, aliens, bullets, screen, ship)


def play_init_setting(ai_setting, stats, sb, aliens, bullets, screen, ship):
    # 隐藏光标
    pygame.mouse.set_visible(False)

    # 重置游戏统计信息
    stats.reset_stats()  # 重置统计信息
    ai_setting.initialize_dynamic_settings()  # 重置游戏速度
    stats.game_active = True

    # 将最高分装载入系统并重置记分牌图像
    load_high_score(ai_setting, stats)
    sb.prep_score()
    sb.prep_high_score()
    sb.prep_level()
    sb.prep_ships()

    # 清空外星人列表和子弹列表
    aliens.empty()
    bullets.empty()

    # 创建一群新的外星人，并让飞船居中
    create_fleet(ai_setting, screen, ship, aliens)
    ship.center_ship()

#############################################################################
# 习题14-4加入储存与读取最高分的功能
def load_high_score(ai_setting, stats):
    filename = ai_setting.filename
    with open(filename) as file_object:
        stats.high_score = int(file_object.read())


#############################################################################
def save_high_score(ai_settings, stats):
    filename = ai_settings.filename
    with open(filename, "w") as file_object:
        file_object.write(str(stats.high_score))


def check_play_keyboard(ai_setting, screen, stats, sb, ship, aliens, bullets):
    """在玩家单击Play按钮时开始新游戏 习题14-4 加入键盘p开始按键"""
    # 加入键盘开始游戏按键判断
    # 如果 stats.game_active = True 不进行重置
    if ai_setting.keyboard_play and not stats.game_active:

        # 游戏初始化设置
        play_init_setting(ai_setting, stats, sb, aliens, bullets, screen, ship)


def check_bullet_alien_collisions(ai_settings, screen, stats, sb, ship, aliens,
                                  bullets):
    """响应子弹和外星人的碰撞"""
    # 检查是否有子弹击中外星人
    # 如果是这样，就删除相应的子弹和外星人
    collisions = pygame.sprite.groupcollide(bullets, aliens, True, True)

    if collisions:
        for aliens in collisions.values():
            stats.score += ai_settings.alien_points * len(aliens)
            sb.prep_score()  # 更新当前得分
        check_high_score(stats, sb)  # 检查是否为最高分
    if len(aliens) == 0:
        # 等级提升设置
        level_up_setting(ai_settings, bullets, stats, sb, screen, ship, aliens)


def level_up_setting(ai_settings, bullets, stats, sb, screen, ship, aliens):
    # 删除现有的子弹并新建一群外星人
    bullets.empty()  # 删除编组中余下的所有精灵，从而删除现有的所有子弹
    ai_settings.increase_speed()  # 加快游戏速度

    # 提高等级
    stats.level += 1
    sb.prep_level()
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
    """创建外星人"""
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


def ship_hit(ai_setting, stats, sb, screen, ship, aliens, bullets):
    """响应被外星人撞到的飞船"""
    if stats.ships_left > 0:
        # 将ship_left 减1
        stats.ships_left -= 1

        # 更新记分牌
        sb.prep_ships()
        # 清空外星人列表和子弹列表
        aliens.empty()
        bullets.empty()

        # 创建一群新的外星人，并将飞船放到屏幕底端中央
        create_fleet(ai_setting, screen, ship, aliens)
        ship.center_ship()

        # 暂停
        sleep(0.5)
    else:
        stats.game_active = False
        pygame.mouse.set_visible(True)


def check_high_score(stats, sb):
    """检查是否诞生了新的最高分"""
    if stats.score > stats.high_score:
        stats.high_score = stats.score
        sb.prep_high_score()


#################################各界面更新函数#################################
def update_aliens(ai_settings, stats, sb, screen, ship, aliens, bullets):
    """
    检查是否有外星人位于屏幕边缘，并更新外星人群中所有外星人的位置
    """
    check_fleet_edges(ai_settings, aliens)
    aliens.update()

    # 检测外星人与飞船之间的碰撞
    if pygame.sprite.spritecollideany(ship, aliens):
        ship_hit(ai_settings, stats, sb, screen, ship, aliens, bullets)

    # 检查是否有外星人抵达屏幕底端
    check_aliens_bottom(ai_settings, stats, sb, screen, ship, aliens, bullets)


def check_aliens_bottom(ai_settings, stats, sb, screen, ship, aliens, bullets):
    """检查是否有外星人抵达屏幕底端"""
    screen_rect = screen.get_rect()
    for alien in aliens.sprites():
        if alien.rect.bottom >= screen_rect.bottom:
            # 像飞船被外星人撞到一样处理
            ship_hit(ai_settings, stats, sb, screen, ship, aliens, bullets)
            break


def update_screen(ai_setting, screen, ship, stats, sb, aliens, bullets,
                  play_button):
    """更新屏幕上的图像，并切换到新屏幕"""
    # 每次循环时都重绘屏幕
    screen.fill(ai_setting.bg_color)
    # 在飞船和外星人后边重绘所有子弹
    for bullet in bullets.sprites():
        bullet.draw_bullet()
    ship.blitme()  # 绘制飞船
    aliens.draw(screen)  # 绘制外星人群

    # 显示得分
    sb.show_score()

    # 如果游戏处于非活动状态，就绘制Play按钮
    if not stats.game_active:
        play_button.draw_button()
        load_high_score(ai_setting, stats)
        sb.prep_high_score()
    # 让最近绘制的屏幕可见
    pygame.display.flip()


def update_bullets(ai_settings, screen, stats, sb, ship, aliens, bullets):
    """更新子弹的位置，并删除已消失的子弹"""
    # 更新子弹的位置
    bullets.update()
    # 删除已消失的子弹
    for bullet in bullets.copy():
        if bullet.rect.bottom <= 0:
            bullets.remove(bullet)
        if bullet.rect.left <= 0:
            bullets.remove(bullet)
        if bullet.rect.right >= ai_settings.screen_width:
            bullets.remove(bullet)

    check_bullet_alien_collisions(ai_settings, screen, stats, sb, ship, aliens,
                                  bullets)
