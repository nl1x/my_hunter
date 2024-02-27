/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** texture.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

static
void lx_sprite_init_texture(lx_sprite_t *sprite)
{
    sfTexture *texture = sfTexture_createFromFile(sprite->texture_path, NULL);

    sprite->texture = texture;
}

void lx_sprite_update_texture(lx_sprite_t *sprite)
{
    sfIntRect *rect = sprite->texture_rect;
    int anim_length = sprite->nb_frames;

    if (sprite->texture == NULL)
        lx_sprite_init_texture(sprite);
    if (lx_clock_get_seconds(sprite->clock) > sprite->animation_timer) {
        lx_rect_move(rect, rect->width, rect->width * (anim_length - 1));
        lx_clock_restart(sprite->clock);
    }
    sfSprite_setTextureRect(sprite->object, *sprite->texture_rect);
    sfSprite_setTexture(sprite->object, sprite->texture, sfFalse);
}

void lx_sprite_set_texture(lx_sprite_t *sprite, int index)
{
    sfIntRect *rect = sprite->texture_rect;
    int nb_frames = sprite->nb_frames;

    rect->left = 0;
    if (sprite->texture == NULL)
        lx_sprite_init_texture(sprite);
    lx_rect_move(rect, rect->width * index, rect->width * (nb_frames - 1));
    sfSprite_setTextureRect(sprite->object, *rect);
    sfSprite_setTexture(sprite->object, sprite->texture, sfFalse);
}

void lx_sprite_resize_texture(lx_sprite_t *sprite, int width, int height)
{
    sprite->rect->width = width;
    sprite->rect->height = height;
    sfSprite_setTextureRect(sprite->object, *sprite->rect);
}
