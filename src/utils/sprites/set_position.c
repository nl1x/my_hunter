/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** set_position.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

void lx_sprite_set_pos(lx_sprite_t *sprite, sfVector2f pos)
{
    sfSprite_setPosition(sprite->object, pos);
}
