/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** gameloop.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

static
void update_delta_time(game_t *game)
{
    game->dt = lx_clock_get_seconds(game->delta_clock);
    lx_clock_restart(game->delta_clock);
}

int gameloop(game_t *game)
{
    lx_window_t *win = game->win;

    while (lx_win_is_open(win)) {
        if (win->current_frame->analyse_events(game))
            break;
        update_game(game);
        update_delta_time(game);
    }
    lx_win_close(win, 1);
    return 0;
}
