/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** events.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

int analyse_play_events(game_t *game)
{
    lx_window_t *win = game->win;
    sfEvent event;

    while (lx_win_poll_event(win, &event)) {
        switch (event.type) {
            case sfEvtKeyReleased:
                manage_play_key_released(game, event.key);
                break;
            case sfEvtClosed:
                manage_close_event(win);
                return 1;
            case sfEvtMouseButtonReleased:
                manage_play_click(game, event.mouseButton);
                break;
            default:
                break;
        }
    }
    return 0;
}
