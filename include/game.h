/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** play.h
** Author: nathan.jeannot@epitech.eu
*/

#ifndef MYHUNTER_GAME_H
    #define MYHUNTER_GAME_H

    #define FPS 60

    #define GAME_RESX 16
    #define GAME_RESY 9
    #define GAME_WIDTH 1280
    #define GAME_HEIGHT 720

    #define FRAME_MENU "frame.menu"
    #define FRAME_PLAY "frame.play"

    #define DOG_WIDTH 56
    #define DOG_HEIGHT 43
    #define DOG_PATH "assets/dog_walking.png"
    #define DOG_SCALE 5
    #define DOG_START_X (-(DOG_WIDTH * DOG_SCALE) - 200)
    #define DOG_START_Y (GAME_HEIGHT - DOG_HEIGHT * DOG_SCALE - 30)
    #define DOG_START_POS DOG_START_X, DOG_START_Y
    #define DOG_END_X (GAME_WIDTH + 200)
    #define DOG_ANIM_INTERVAL 5
    #define DOG_VELOCITY 100

    #define MENU_BG_PATH "assets/menu_background.png"
    #define PLAY_BG_PATH "assets/play_background.png"
    #define PLAY_BTN_PATH "assets/PLAY_BUTTON.png"
    #define QUIT_BTN_PATH "assets/QUIT_BUTTON.png"

    #define BIRD_PATH "assets/bird_sheet.png"
    #define BIRD_SIZE_X 34
    #define BIRD_SIZE_Y 32
    #define BIRD_RECT 0, 0, BIRD_SIZE_X, BIRD_SIZE_Y
    #define BIRD_VELOCITY 200
    #define BIRD_SCALE 3.5

    #define BG_SCALING 3.1

    #define MENU_BTN_SIZE_X 250
    #define MENU_BTN_SIZE_Y 57

    #define PLAY_BTN_SIZE_X 130
    #define PLAY_BTN_SIZE_Y 33
    #define PLAY_BTN_SIZE PLAY_BTN_SIZE_X, PLAY_BTN_SIZE_Y

    #define QUIT_BTN_SIZE_X 110
    #define QUIT_BTN_SIZE_Y 38
    #define QUIT_BTN_SIZE QUIT_BTN_SIZE_X, QUIT_BTN_SIZE_Y

    #define MENU_BTN_X 340
    #define MENU_BTN_Y 100

    #define MENU_BTN_SCALING 2.8
    #define MENU_BTN_PADDING (100 + MENU_BTN_SIZE_Y)

    #define PLAY_BTN_X MENU_BTN_X
    #define PLAY_BTN_Y (MENU_BTN_Y)

    #define QUIT_BTN_X MENU_BTN_X
    #define QUIT_BTN_Y (PLAY_BTN_Y + MENU_BTN_PADDING)

    #define SCORE_SCALE 1
    #define SCORE_POS_X 10
    #define SCORE_POS_Y 18
    #define SCORE_WIDTH 177
    #define SCORE_HEIGHT 27
    #define SCORE_SIZE SCORE_WIDTH, SCORE_HEIGHT
    #define SCORE_PATH "assets/SCORE.png"
    #define SCORE_TXT_X (SCORE_WIDTH + 20)
    #define SCORE_TXT_Y 0

    #define FONT_PATH "assets/font.ttf"
    #define FONT_SIZE 43

    #include "lx_csfml_lib.h"
    #include "my.h"

typedef struct menu {
    lx_frame_t *frame;
    lnklst_t *buttons;
    lx_sprite_t *dog;
    sfClock *dog_anim_clock;
    int dog_anim;
} menu_t;

typedef struct bird {
    lx_sprite_t *sprite;
    sfVector2f *velocity;
    sfVector2f *next_position;
    sfVector2f *current_position;
} bird_t;

typedef struct score {
    lx_sprite_t *sprite;
    lx_text_t *text;
    lx_text_t *shadow;
    int value;
} score_t;

typedef struct play {
    lx_frame_t *frame;
    lx_children_t *birds;
    score_t *score;
} play_t;

typedef struct game {
    lx_window_t *win;
    menu_t *menu;
    play_t *play;
    sfClock *delta_clock;
    double dt;
} game_t;

// Options
int handle_options(int ac, char **av);

// Errors
int handle_errors(void);

// Bird
bird_t *create_bird(play_t *play);
void summon_bird(play_t *play);
bird_t *get_bird_from_sprite(game_t *game, lx_sprite_t *sprite);
void kill_bird(game_t *game, bird_t *bird);

// Global
game_t *init_game(void);
int gameloop(game_t *game);
void manage_close_event(lx_window_t *win);
void manage_menu_mouse_move_event(game_t *game, sfMouseMoveEvent mouse);
void update_game(game_t *game);
void destroy_game(game_t *game);

// Menu
void init_menu(game_t *game);
int analyse_menu_events(game_t *game);
void update_menu_frame(game_t *game);
void manage_menu_click_event(game_t *game, sfMouseButtonEvent mouse);
void hover_button(game_t *game, lx_sprite_t *button);

// Play
void init_play(game_t *game);
int analyse_play_events(game_t *game);
void update_play_frame(game_t *game);
void manage_play_key_released(game_t *game, sfKeyEvent key);
void manage_play_click(game_t *game, sfMouseButtonEvent click);
void start_game(game_t *game);
void set_new_next_position(bird_t *bird);
sfVector2f *random_position(void);
void move_bird(game_t *game, bird_t *bird);
void update_score(game_t *game);
void create_score(game_t *game);

#endif
