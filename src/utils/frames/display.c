/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

static
void lx_frame_display_sprites(lx_children_t *sprites, lx_window_t *win)
{
    int amount = sprites->amount;

    for (int i = 0; i < amount; i++) {
        lx_sprite_display(my_lnk_get(sprites->objects, i)->data, win);
    }
}

static
void lx_frame_display_texts(lx_children_t *texts, lx_window_t *win)
{
    int amount = texts->amount;

    for (int i = 0; i < amount; i++) {
        lx_text_display(my_lnk_get(texts->objects, i)->data, win);
    }
}

void lx_frame_display(lx_frame_t *frame, lx_window_t *win)
{
    lx_frame_display_sprites(frame->sprites, win);
    lx_frame_display_texts(frame->texts, win);
}
