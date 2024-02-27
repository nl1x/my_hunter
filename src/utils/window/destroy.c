/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml_lib.h"

void lx_window_destroy(lx_window_t *win)
{
    if (win == NULL)
        return;
    sfRenderWindow_destroy(win->object);
    lx_frame_destroy(win->current_frame);
    free(win);
}
