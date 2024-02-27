/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** key_pressed_event.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../../include/game.h"

void manage_play_key_released(game_t *game, sfKeyEvent key)
{
    switch (key.code) {
        case sfKeyEscape:
            lx_win_set_current_frame(game->win, game->menu->frame);
            break;
        default:
            break;
    }
}
