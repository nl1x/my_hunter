/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

lx_sprite_t *lx_sprite_new(
    char const *texture, sfIntRect *texture_rect,
    int nb_frames, double animation_speed
)
{
    lx_sprite_t *lx_sprite = malloc(sizeof(lx_sprite_t));

    lx_sprite->object = sfSprite_create();
    lx_sprite->rect = lx_rect_new(0, 0, texture_rect->width,
    texture_rect->height);
    lx_sprite->texture_rect = texture_rect;
    lx_sprite->nb_frames = nb_frames;
    lx_sprite->animation_timer = animation_speed;
    lx_sprite->texture_path = my_strclone(texture);
    lx_sprite->texture = NULL;
    lx_sprite->clock = lx_clock_new();
    lx_sprite_set_texture(lx_sprite, 0);
    return lx_sprite;
}
