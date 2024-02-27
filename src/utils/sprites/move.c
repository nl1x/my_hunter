/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** move.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

void lx_sprite_move(lx_sprite_t *sprite, sfVector2f velocity)
{
    sfVector2f sprite_pos = sfSprite_getPosition(sprite->object);

    sprite_pos.x += velocity.x;
    sprite_pos.y += velocity.y;
    sfSprite_setPosition(sprite->object, sprite_pos);
}

void lx_sprite_move_dt(lx_sprite_t *sprite, sfVector2f velocity, float dt)
{
    sfVector2f sprite_pos = sfSprite_getPosition(sprite->object);

    sprite_pos.x += velocity.x * dt;
    sprite_pos.y += velocity.y * dt;
    sfSprite_setPosition(sprite->object, sprite_pos);
}
