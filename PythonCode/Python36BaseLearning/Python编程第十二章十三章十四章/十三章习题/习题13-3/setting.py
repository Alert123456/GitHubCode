import pygame


class Setting():
    """储存雨滴下落的所有设置"""

    def __init__(self):
        """初始化雨滴下落"""
        #屏幕设置
        self.screen_width = 1200
        self.screen_height = 800
        self.bg_color = (241, 241, 241)
        #雨滴设置
        self.raindrop_fall_speed = 1
