import sys

import pygame


def check_keydown_events(event, hand):
    if event.key == pygame.K_RIGHT:
        hand.moving_right = True
    elif event.key == pygame.K_LEFT:
        hand.moving_left = True
    elif event.key == pygame.K_q:
        sys.exit()


def check_keyup_events(event, hand):
    if event.key == pygame.K_RIGHT:
        hand.moving_right = False
    elif event.key == pygame.K_LEFT:
        hand.moving_left = False


def check_events(hand):
    """响应按键事件"""
    for event in pygame.event.get():  # 获取键盘鼠标事件
        if event.type == pygame.QUIT:
            sys.exit()
        elif event.type == pygame.KEYDOWN:  # 键盘按下
            check_keydown_events(event, hand)
        elif event.type == pygame.KEYUP:  # 键盘抬起
            check_keyup_events(event, hand)


def update_boll(hand, bolls, setting):
    collisions = pygame.sprite.collide_rect(hand, bolls) # 检测碰撞输出为Ture
    bolls.update()
    if bolls.rect.top >= setting.screen_height or collisions:
        bolls.creat_boll(setting)


def update_screen(setting, screen, hands, bolls):
    screen.fill(setting.color)
    hands.draw_hand()  # 绘制手
    bolls.blit_me()  # 绘制球
    pygame.display.flip()  # 更新画面


