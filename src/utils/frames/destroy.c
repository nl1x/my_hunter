/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

static
void destroy_sprite(lx_sprite_t *sprite)
{
    if (sprite != NULL)
        lx_sprite_destroy(sprite);
}

static
void destroy_text(lx_text_t *text)
{
    if (text != NULL)
        lx_text_destroy(text);
}

void lx_frame_destroy(lx_frame_t *frame)
{
    lnklst_t *sprites;
    lnklst_t *texts;

    if (frame == NULL)
        return;
    sprites = frame->sprites->objects;
    texts = frame->texts->objects;
    my_lnk_destroy(sprites, (void (*)(void *)) &destroy_sprite);
    my_lnk_destroy(texts, (void (*)(void *)) &destroy_text);
    free(frame);
}
