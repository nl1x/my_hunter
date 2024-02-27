/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** update.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdio.h>
#include "game.h"

static
int has_reached_next_pos(bird_t *bird)
{
    sfVector2f *vel = bird->velocity;
    sfVector2f pos = sfSprite_getPosition(bird->sprite->object);
    sfVector2f nxt_pos = *bird->next_position;
    int has_reached_x;
    int has_reached_y;

    if (vel->x > 0)
        has_reached_x = pos.x > nxt_pos.x;
    else
        has_reached_x = pos.x <= nxt_pos.x;
    if (vel->y > 0)
        has_reached_y = pos.y > nxt_pos.y;
    else
        has_reached_y = pos.y <= nxt_pos.y;
    return has_reached_x && has_reached_y;
}

static
void check_bird_position(bird_t *bird)
{
    if (has_reached_next_pos(bird))
        set_new_next_position(bird);
}

static
void update_birds(game_t *game)
{
    lnklst_t *birds = game->play->birds->objects;
    bird_t *bird;

    while (birds != NULL) {
        bird = birds->data;
        check_bird_position(bird);
        move_bird(game, bird);
        lx_sprite_update_texture(bird->sprite);
        birds = birds->next;
    }
}

void update_play_frame(game_t *game)
{
    update_birds(game);
}
