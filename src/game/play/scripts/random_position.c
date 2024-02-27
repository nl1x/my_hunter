/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** random_position.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

sfVector2f *random_position(void)
{
    sfVector2f *vector = malloc(sizeof(sfVector2f));
    float factor_x = (float) ((rand() % 100) + 1) / 100;
    float factor_y = (float) ((rand() % 100) + 1) / 100;
    float pos_x = ABS(factor_x * GAME_WIDTH);
    float pos_y = ABS(factor_y * GAME_HEIGHT);

    vector->x = pos_x;
    vector->y = pos_y;
    return vector;
}
