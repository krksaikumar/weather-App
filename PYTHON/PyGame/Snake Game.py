import pygame
import random
import os

pygame.init()
pygame.mixer.init()
#pygame.mixer.music.load("aipaye.mp3")
#pygame.mixer.music.play()
#colors
white = (255, 255, 255)
red = (255, 0, 0)
black = (0, 0, 0)
#background
#bg = pygame.image.load('bg1.jpg')
#creating window
screen_width = 700#900
screen_height = 900#500
game_window = pygame.display.set_mode((screen_width, screen_height))
#Game Title
pygame.display.set_caption = "Snake Game"
pygame.display.update()

clock = pygame.time.Clock()
font = pygame.font.SysFont(None , 55)

def text_screen(text, color, x, y):
    screen_text = font.render(text, True, color)
    game_window.blit(screen_text, [x, y])
def plot_snake(game_window, color, snk_list, snake_size):
    for x, y in snk_list:
        pygame.draw.rect(game_window, black, [x, y, snake_size, snake_size])      
        
def gameloop():
    #game specific variables 
    exit_game = False
    game_over = False 
    snake_x = 45
    snake_y = 70
    snake_size = 30
    fps = 30
    init_velocity = 10
    velocity_x = 0
    velocity_y = 0
    food_x = random.randint(100, screen_width-100)
    food_y = random.randint(100, screen_height-100)
    score = 0
    snk_list = []
    snk_length = 1
   
    if not os.path.isfile("highscore.txt"):    
        with open("highscore.txt", "w") as f:
            f.write("0")
    else:
        with open("highscore.txt", "r") as f:
            highscore = f.read()
            
            
    #game loop
    while not exit_game:
        if game_over:
            with open("highscore.txt", "w") as f:
                f.write(str(highscore))
            #game_window.blit(bg, (0,0))
            game_window.fill(white)
            text_screen("GAME OVER!!", black, 225, screen_height/2)
            text_screen("Press Enter To Continue", black, 150, 550)
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exit_game = True
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_RETURN:
                        gameloop()
            
        else:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    exit_game = True
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_d:
                            velocity_x = init_velocity
                            velocity_y = 0
                    if event.key == pygame.K_a:
                            velocity_x = -init_velocity
                            velocity_y = 0
                    if event.key == pygame.K_w:
                            velocity_y = -init_velocity
                            velocity_x = 0
                    if event.key == pygame.K_s:
                            velocity_y = init_velocity
                            velocity_x = 0
                            
            snake_x += velocity_x
            snake_y += velocity_y 
            if abs(snake_x - food_x) < snake_size-3 and abs(snake_y - food_y) < snake_size-3:      
                 score += 10
                 snk_length += (snake_size//init_velocity)+1#5
                 food_x = random.randint(50, screen_width-50)
                 food_y = random.randint(50, screen_height-50)
                 if score > int(highscore):
                     highscore = score
                
                    
            head = []      
            head.append(snake_x)
            head.append(snake_y)
            snk_list.append(head)
            
            if len(snk_list) > snk_length:
                del(snk_list[0])
            
            if head in snk_list[ : -1]:
                game_over = True
                pygame.mixer.music.load("aipaye.mp3")
                pygame.mixer.music.play()
                
            if snake_x < 0 or snake_x > screen_width or snake_y <0 or snake_y > screen_height+50:                                                                  
                game_over = True
                pygame.mixer.music.load("aipaye.mp3")
                pygame.mixer.music.play()
                
            #game_window.blit(bg, (0,0))
            game_window.fill(white)
            text_screen("SCORE : "+str(score), red, 20, 30 )
            text_screen("HighScore : "+str(highscore), red, 425, 30 )
            pygame.draw.rect(game_window, red, [food_x, food_y, snake_size, snake_size])
                
            #pygame.draw.rect(game_window, black, [snake_x, snake_y, snake_size, snake_size])
            plot_snake(game_window, black, snk_list, snake_size )   
        pygame.display.update()
        clock.tick(fps)            
 
gameloop()       
pygame.quit()      
quit()