/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** events.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

int analyse_menu_events(game_t *game)
{
    lx_window_t *win = game->win;
    sfEvent event;

    while (lx_win_poll_event(win, &event)) {
        switch (event.type) {
            case sfEvtClosed:
                manage_close_event(win);
                return 1;
            case sfEvtMouseButtonReleased:
                manage_menu_click_event(game, event.mouseButton);
                break;
            case sfEvtMouseMoved:
                manage_menu_mouse_move_event(game, event.mouseMove);
                break;
            default:
                break;
        }
    }
    return 0;
}
