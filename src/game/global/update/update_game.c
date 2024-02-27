/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** update_game.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

void update_game(game_t *game)
{
    lx_window_t *win = game->win;

    sfRenderWindow_clear(win->object, sfBlack);
    win->current_frame->update_frame(game);
    lx_win_display(win);
}
