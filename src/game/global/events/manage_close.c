/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** manage_close.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

void manage_close_event(lx_window_t *win)
{
    lx_win_close(win, 0);
}
