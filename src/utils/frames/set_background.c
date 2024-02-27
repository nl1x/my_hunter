/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** set_background.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/game.h"

void lx_frame_set_background(lx_frame_t *frame, char const *path)
{
    sfIntRect *rect = lx_rect_new(0, 0, 512, 239);
    lx_sprite_t *background = lx_sprite_new(path, rect, 0, 0);

    frame->background = background;
    lx_children_add(frame->sprites, frame->background);
}
