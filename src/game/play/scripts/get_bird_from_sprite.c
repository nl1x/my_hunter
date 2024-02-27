/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** get_bird_from_sprite.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../include/game.h"

bird_t *get_bird_from_sprite(game_t *game, lx_sprite_t *sprite)
{
    bird_t *bird = NULL;
    lnklst_t *birds = game->play->birds->objects;

    while (birds != NULL && sprite != NULL) {
        bird = birds->data;
        if (bird->sprite == sprite)
            break;
        birds = birds->next;
    }
    return bird;
}
