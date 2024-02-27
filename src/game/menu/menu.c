/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** menu.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

static
void add_dog(menu_t *menu)
{
    sfIntRect *rect = lx_rect_new(0, 0, DOG_WIDTH, DOG_HEIGHT);
    lx_sprite_t *dog = lx_sprite_new(DOG_PATH, rect, 4, 0.3);
    sfVector2f scale = (sfVector2f) {DOG_SCALE, DOG_SCALE};

    lx_sprite_set_pos(dog, (sfVector2f) {DOG_START_POS});
    sfSprite_scale(dog->object, scale);
    dog->rect->width *= scale.x;
    dog->rect->height *= scale.y;
    lx_children_add(menu->frame->sprites, dog);
    menu->dog = dog;
    menu->dog_anim = 1;
    menu->dog_anim_clock = lx_clock_new();
}

static
void add_button(
    menu_t *menu, char const *path, sfVector2f pos, sfVector2i size
)
{
    sfIntRect *rect = lx_rect_new(0, 0, size.x, size.y);
    lx_sprite_t *button = lx_sprite_new(path, rect, 2, -1);
    sfVector2f btn_scale = (sfVector2f) {MENU_BTN_SCALING, MENU_BTN_SCALING};

    lx_sprite_set_pos(button, pos);
    sfSprite_scale(button->object, btn_scale);
    button->rect->width *= btn_scale.x;
    button->rect->height *= btn_scale.y;
    lx_children_add(menu->frame->sprites, button);
    my_lnk_push(&menu->buttons, button);
}

static
void set_background(lx_frame_t *menu)
{
    sfVector2f bg_scaling = {BG_SCALING, BG_SCALING};

    lx_frame_set_background(menu, MENU_BG_PATH);
    sfSprite_scale(menu->background->object, bg_scaling);
}

static
void set_buttons(menu_t *menu)
{
    add_button(menu, PLAY_BTN_PATH, *lx_vector2f(PLAY_BTN_X, PLAY_BTN_Y),
    (sfVector2i) {PLAY_BTN_SIZE});
    add_button(menu, QUIT_BTN_PATH, *lx_vector2f(QUIT_BTN_X, QUIT_BTN_Y),
    (sfVector2i) {QUIT_BTN_SIZE});
}

void init_menu(game_t *game)
{
    lx_frame_t *frame = lx_frame_new(&analyse_menu_events, &update_menu_frame,
    FRAME_MENU);

    game->menu = malloc(sizeof(menu_t));
    game->menu->frame = frame;
    game->menu->buttons = NULL;
    lx_children_add(game->win->frames, frame);
    lx_win_set_current_frame(game->win, frame);
    set_background(frame);
    set_buttons(game->menu);
    add_dog(game->menu);
}
