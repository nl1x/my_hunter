/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** kill_bird.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void kill_bird(game_t *game, bird_t *bird)
{
    lx_children_remove(game->play->frame->sprites, bird->sprite);
    lx_children_remove(game->play->birds, bird);
    game->play->score->value++;
    update_score(game);
    summon_bird(game->play);
    if (game->play->score->value % 20 == 0)
        summon_bird(game->play);
}
