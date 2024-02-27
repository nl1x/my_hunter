/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** set_current_frame.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

void lx_win_set_current_frame(lx_window_t *win, lx_frame_t *frame)
{
    win->current_frame = frame;
}
