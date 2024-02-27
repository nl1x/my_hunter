/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

void lx_sprite_destroy(lx_sprite_t *sprite)
{
    if (sprite == NULL)
        return;
    sfSprite_destroy(sprite->object);
    sfClock_destroy(sprite->clock);
    sfTexture_destroy(sprite->texture);
    free(sprite->texture_path);
    free(sprite);
}
