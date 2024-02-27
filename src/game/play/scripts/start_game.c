/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** start_game.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

void start_game(game_t *game)
{
    lx_win_set_current_frame(game->win, game->play->frame);
}
