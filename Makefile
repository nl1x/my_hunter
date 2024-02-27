##
## EPITECH PROJECT, 2023
## bsmyhunter
## File description:
## Makefile
## Author: nathan.jeannot@epitech.eu
##

## --- Project ---

NAME = my_hunter
DBG_NAME = debug-myhunter
LIB_NAME = my
LIB = lib$(LIB_NAME).a
VGCORE = vgcore.*

## --- Folders ---

SRC_FOLDER = src
INC_FOLDER = include
LIB_FOLDER = lib
LIBMY_FOLDER = $(LIB_FOLDER)/my

OPTIONS_FOLDER = $(SRC_FOLDER)/options_handler
ERROR_FOLDER = $(SRC_FOLDER)/error_handler
GAME_FOLDER = $(SRC_FOLDER)/game
ENTITY_FOLDER = $(GAME_FOLDER)/entities
GLOBAL_FOLDER = $(GAME_FOLDER)/global
MENU_FOLDER = $(GAME_FOLDER)/menu
PLAY_FOLDER = $(GAME_FOLDER)/play

## --- LX Folders ---

UTILS_FOLDER = $(SRC_FOLDER)/utils
SPRITES_FOLDER = $(UTILS_FOLDER)/sprites
RECTS_FOLDER = $(UTILS_FOLDER)/rects
CLOCK_FOLDER = $(UTILS_FOLDER)/clock
TEXT_FOLDER = $(UTILS_FOLDER)/text
WINDOW_FOLDER = $(UTILS_FOLDER)/window
CHILDREN_FOLDER = $(UTILS_FOLDER)/children
FRAMES_FOLDER = $(UTILS_FOLDER)/frames
VECTOR_FOLDER = $(UTILS_FOLDER)/vector

## --- Files ---

# main
SRC  = $(SRC_FOLDER)/main.c

# options
SRC += $(OPTIONS_FOLDER)/handle_options.c

# errors
SRC += $(ERROR_FOLDER)/handle_error.c

# global
SRC += $(GLOBAL_FOLDER)/game.c
SRC += $(GLOBAL_FOLDER)/destroy.c

SRC += $(GLOBAL_FOLDER)/loop/gameloop.c

SRC += $(GLOBAL_FOLDER)/events/manage_close.c
SRC += $(GLOBAL_FOLDER)/events/manage_resize.c

SRC += $(GLOBAL_FOLDER)/update/update_game.c

# menu
SRC += $(MENU_FOLDER)/menu.c

SRC += $(MENU_FOLDER)/scripts/hover_button.c

SRC += $(MENU_FOLDER)/events/events.c
SRC += $(MENU_FOLDER)/events/manager/click_event.c
SRC += $(MENU_FOLDER)/events/manager/move_mouse_event.c

SRC += $(MENU_FOLDER)/update/update.c

# play
SRC += $(PLAY_FOLDER)/play.c

SRC += $(PLAY_FOLDER)/scripts/start_game.c
SRC += $(PLAY_FOLDER)/scripts/random_movement.c
SRC += $(PLAY_FOLDER)/scripts/random_position.c
SRC += $(PLAY_FOLDER)/scripts/create_bird.c
SRC += $(PLAY_FOLDER)/scripts/summon_bird.c
SRC += $(PLAY_FOLDER)/scripts/create_score.c
SRC += $(PLAY_FOLDER)/scripts/get_bird_from_sprite.c
SRC += $(PLAY_FOLDER)/scripts/kill_bird.c
SRC += $(PLAY_FOLDER)/scripts/move_bird.c
SRC += $(PLAY_FOLDER)/scripts/update_score.c

SRC += $(PLAY_FOLDER)/events/events.c
SRC += $(PLAY_FOLDER)/events/manager/key_pressed_event.c
SRC += $(PLAY_FOLDER)/events/manager/click_event.c

SRC += $(PLAY_FOLDER)/update/update.c


## --- LX Files ---

# clock
SRC += $(CLOCK_FOLDER)/get.c
SRC += $(CLOCK_FOLDER)/new.c
SRC += $(CLOCK_FOLDER)/restart.c

# rects
SRC += $(RECTS_FOLDER)/new.c
SRC += $(RECTS_FOLDER)/move.c

# sprites
SRC += $(SPRITES_FOLDER)/collide.c
SRC += $(SPRITES_FOLDER)/destroy.c
SRC += $(SPRITES_FOLDER)/display.c
SRC += $(SPRITES_FOLDER)/move.c
SRC += $(SPRITES_FOLDER)/scale.c
SRC += $(SPRITES_FOLDER)/set_position.c
SRC += $(SPRITES_FOLDER)/new.c
SRC += $(SPRITES_FOLDER)/texture.c

# text
SRC += $(TEXT_FOLDER)/new.c
SRC += $(TEXT_FOLDER)/edit.c
SRC += $(TEXT_FOLDER)/color.c
SRC += $(TEXT_FOLDER)/display.c
SRC += $(TEXT_FOLDER)/move.c
SRC += $(TEXT_FOLDER)/destroy.c

# window
SRC += $(WINDOW_FOLDER)/new.c
SRC += $(WINDOW_FOLDER)/is_open.c
SRC += $(WINDOW_FOLDER)/events.c
SRC += $(WINDOW_FOLDER)/set_current_frame.c
SRC += $(WINDOW_FOLDER)/display.c
SRC += $(WINDOW_FOLDER)/destroy.c
SRC += $(WINDOW_FOLDER)/close.c

# children
SRC += $(CHILDREN_FOLDER)/new.c
SRC += $(CHILDREN_FOLDER)/add.c
SRC += $(CHILDREN_FOLDER)/remove.c

# frames
SRC += $(FRAMES_FOLDER)/new.c
SRC += $(FRAMES_FOLDER)/display.c
SRC += $(FRAMES_FOLDER)/destroy.c
SRC += $(FRAMES_FOLDER)/get.c
SRC += $(FRAMES_FOLDER)/set_background.c

# vector
SRC += $(VECTOR_FOLDER)/new.c

OBJ = $(SRC:.c=.o)

## --- Flags ---

SFML_FLAGS = -lcsfml-window -lcsfml-graphics -lcsfml-system
MATH_FLAGS = -lm
LIB_FLAGS = -L$(LIB_FOLDER) -l$(LIB_NAME) $(SFML_FLAGS) $(MATH_FLAGS)
IFLAGS = -I $(INC_FOLDER)
DBG_FLAGS = -g3
CFLAGS = -Wall -Wextra $(IFLAGS)

## --- RULES ---

all: $(LIB) $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB_FLAGS) $(IFLAGS) $(SFML_FLAGS)

$(LIB):
	$(MAKE) -C $(LIBMY_FOLDER)

debug: $(LIB)
	$(CC) -o $(DBG_NAME) $(SRC) $(LIB_FLAGS) $(IFLAGS) $(DBG_FLAGS) $(LDFLAGS)

clean:
	$(MAKE) -C $(LIBMY_FOLDER) clean
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBMY_FOLDER) fclean
	$(RM) $(NAME) $(DBG_NAME) $(VGCORE) *.a

re: fclean all
