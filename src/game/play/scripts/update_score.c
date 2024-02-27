/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** update_score.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void update_score(game_t *game)
{
    int score = game->play->score->value;
    char *value = my_int_to_str(score);
    lx_text_t *text = game->play->score->text;
    lx_text_t *shadow = game->play->score->shadow;

    lx_text_edit_value(text, value);
    lx_text_edit_value(shadow, value);
}
