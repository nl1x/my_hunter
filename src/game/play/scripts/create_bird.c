/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** bird.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

bird_t *create_bird(play_t *play)
{
    bird_t *bird = malloc(sizeof(bird_t));
    sfIntRect *rect = lx_rect_new(BIRD_RECT);

    bird->sprite = lx_sprite_new(BIRD_PATH, rect, 3, 0.2);
    bird->velocity = lx_vector2f(BIRD_VELOCITY, BIRD_VELOCITY);
    bird->current_position = NULL;
    bird->next_position = NULL;
    lx_sprite_scale(bird->sprite, BIRD_SCALE);
    set_new_next_position(bird);
    lx_children_add(play->frame->sprites, bird->sprite);
    return bird;
}
