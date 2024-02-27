/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** move_bird.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

void move_bird(game_t *game, bird_t *bird)
{
    lx_sprite_move_dt(bird->sprite, *bird->velocity, (float) game->dt);
}
