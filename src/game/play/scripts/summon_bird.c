/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** summon_bird.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void summon_bird(play_t *play)
{
    bird_t *bird = create_bird(play);

    my_lnk_push(&play->birds->objects, bird);
}
