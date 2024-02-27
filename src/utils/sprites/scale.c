/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** scale.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void lx_sprite_scale(lx_sprite_t *sprite, float scale)
{
    sfVector2f factor = {scale, scale};

    sfSprite_scale(sprite->object, factor);
    sprite->rect->width *= scale;
    sprite->rect->height *= scale;
}
