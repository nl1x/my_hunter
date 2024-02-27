/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

void lx_win_display(lx_window_t *win)
{
    if (win == NULL || win->object == NULL)
        return;
    lx_frame_display(win->current_frame, win);
    sfRenderWindow_display(win->object);
}
