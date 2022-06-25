import pygame
class Marker():
    """表示靶子的类"""

    def __init__(self, ai_settings, screen):
        """初始化靶子并设置其起始位置"""
        super(Marker, self).__init__()
        self.screen = screen
        self.ai_settings = ai_settings
        self.color = ai_settings.marker_color

        # 加载外星人图像，并设置其rect属性
        self.rect = pygame.Rect(0, 0, ai_settings.marker_width,
                                ai_settings.marker_height)

        # 每个外星人最初都在屏幕左上角附近
        self.rect.x = ai_settings.screen_width - ai_settings.marker_width
        self.rect.y = self.rect.height

        # 储存外星人的准确位置
        self.x = float(self.rect.x)
        self.y = float(self.rect.y)


    def update(self):
        """向下移动靶子"""
        self.rect.y += (self.ai_settings.marker_speed_factor
                       * self.ai_settings.fleet_direction)

    def draw_marker(self):
        """在屏幕上绘制靶子"""
        pygame.draw.rect(self.screen, self.color, self.rect)

    def check_edges(self):
        """如果靶子位于屏幕边缘，就返回True"""
        screen_rect = self.screen.get_rect()
        if self.rect.bottom >= screen_rect.bottom \
                or self.rect.top <= screen_rect.top:
            return True
