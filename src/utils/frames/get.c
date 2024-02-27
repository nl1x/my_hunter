/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** get.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"
#include "../../../include/my.h"

lx_frame_t *lx_frame_get(lx_window_t *win, char const *name)
{
    lx_frame_t *frame = NULL;
    int i = 0;

    do {
        frame = my_lnk_get(win->frames->objects, i)->data;
        i++;
    } while (i < win->frames->amount && my_strcmp(frame->name, name) == 0);
    return frame;
}
