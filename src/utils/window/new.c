/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "../../../include/lx_csfml_lib.h"

lx_window_t *lx_win_new(char const *title, sfVideoMode mode)
{
    lx_window_t *win = malloc(sizeof(lx_window_t));

    win->object = sfRenderWindow_create(
    mode, title, sfTitlebar | sfClose, NULL);
    win->frames = lx_children_new();
    win->current_frame = NULL;
    return win;
}
