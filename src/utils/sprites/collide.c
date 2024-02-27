/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** collide.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdio.h>
#include "game.h"


int lx_sprite_collide_point(lx_sprite_t *sprite, sfVector2f point)
{
    sfVector2f spos = sfSprite_getPosition(sprite->object);
    sfIntRect srect = *sprite->rect;

    srect.left = (int) spos.x;
    srect.top = (int) spos.y;
    return sfIntRect_contains(&srect, (int) point.x, (int) point.y);
}

sfIntRect *lx_sprite_collide(lx_sprite_t *sprite1, lx_sprite_t *sprite2)
{
    sfIntRect *intersection = malloc(sizeof(sfIntRect));

    if (sfIntRect_intersects(sprite1->rect, sprite2->rect, intersection))
        return intersection;
    free(intersection);
    return NULL;
}

lx_sprite_t *lx_sprite_list_collide_point(lnklst_t *sprites, sfVector2f point)
{
    lx_sprite_t *current_sprite = NULL;
    lx_sprite_t *collider = NULL;

    while (sprites != NULL && collider == NULL) {
        current_sprite = sprites->data;
        if (lx_sprite_collide_point(current_sprite, point))
            collider = current_sprite;
        sprites = sprites->next;
    }
    return collider;
}
