/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "../../../include/lx_csfml_lib.h"

lx_frame_t *lx_frame_new(
    int (*analyse_events)(lx_window_t *win),
    void (*update_frame)(lx_window_t *win, lx_frame_t *self),
    char const *name
)
{
    lx_frame_t *frame = malloc(sizeof(lx_frame_t));

    frame->name = name;
    frame->sprites = lx_children_new();
    frame->texts = lx_children_new();
    frame->analyse_events = analyse_events;
    frame->update_frame = update_frame;
    return frame;
}
