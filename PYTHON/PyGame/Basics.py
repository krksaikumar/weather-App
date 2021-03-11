import pygame
pygame.init()
gameWindow = pygame.display.set_mode((1200, 500))
pygame.display.set_caption("My Game")
quit_game = False
game_over = False
while not game_over:
    for event in pygame.event.get():
        print(event)
pygame.quit()
quit()