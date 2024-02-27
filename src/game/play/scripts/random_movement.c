/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** random_movement.c
** Author: nathan.jeannot@epitech.eu
*/

#include <math.h>
#include "game.h"

static
void adjust_position(sfVector2f *pos, sfVector2f sprite_size)
{
    if (pos->x > GAME_WIDTH - sprite_size.x)
        pos->x = GAME_WIDTH - sprite_size.x;
    else if (pos->x < 0)
        pos->x = 0;
    if (pos->y >= GAME_HEIGHT - sprite_size.y)
        pos->y = GAME_HEIGHT - sprite_size.y;
    else if (pos->y < 0)
        pos->y = 0;
}

static
void adjust_texture(bird_t *bird)
{
    if (bird->velocity->x < 0)
        bird->sprite->texture_rect->top = BIRD_SIZE_Y;
    else
        bird->sprite->texture_rect->top = 0;
}

static
void set_new_velocity(bird_t *bird)
{
    sfVector2f *nxt_pos = bird->next_position;
    sfVector2f *cur_pos = bird->current_position;
    sfVector2f vector = {nxt_pos->x - cur_pos->x, nxt_pos->y - cur_pos->y};
    float length = sqrtf(powf(vector.x, 2) + powf(vector.y, 2));

    bird->velocity->x = (vector.x / length) * BIRD_VELOCITY;
    bird->velocity->y = (vector.y / length) * BIRD_VELOCITY;
    adjust_texture(bird);
}

static
sfVector2f *get_random_side_position(void)
{
    sfVector2f *pos;
    double x_pos = (rand() % 2) ? -(BIRD_SIZE_X * BIRD_SCALE) : GAME_WIDTH;
    double y_pos = (rand() % (GAME_HEIGHT));

    pos = lx_vector2f((float) x_pos, (float) y_pos);
    return pos;
}

static
void set_bird_starting_point(bird_t *bird)
{
    bird->current_position = get_random_side_position();
    lx_sprite_set_pos(bird->sprite, *bird->current_position);
}

void set_new_next_position(bird_t *bird)
{
    sfVector2f size = {BIRD_SIZE_X * BIRD_SCALE, BIRD_SIZE_Y * BIRD_SCALE};
    sfVector2f *rdm_pos = random_position();

    if (bird->current_position != NULL)
        free(bird->current_position);
    if (bird->next_position == NULL)
        set_bird_starting_point(bird);
    else
        bird->current_position = bird->next_position;
    bird->next_position = rdm_pos;
    set_new_velocity(bird);
    adjust_position(bird->next_position, size);
}
