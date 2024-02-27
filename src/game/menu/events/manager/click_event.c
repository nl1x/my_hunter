/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** click_event.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void manage_menu_click_event(game_t *game, sfMouseButtonEvent mouse)
{
    lx_window_t *win = game->win;
    sfVector2f point = { (float) mouse.x, (float) mouse.y };
    lnklst_t *sprites = game->menu->buttons;
    lx_sprite_t *collider = lx_sprite_list_collide_point(sprites, point);

    if (collider == NULL)
        return;
    if (!my_strcmp(collider->texture_path, QUIT_BTN_PATH)) {
        manage_close_event(win);
        return;
    }
    if (!my_strcmp(collider->texture_path, PLAY_BTN_PATH)) {
        start_game(game);
        return;
    }
}
