/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** manage_resize.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

void manage_resize_event(game_t *game)
{
    lx_window_t *win = game->win;
    sfVector2u size = sfRenderWindow_getSize(win->object);

    size.y = size.x / GAME_RESX * GAME_RESY;
    sfRenderWindow_setSize(win->object, size);
}
