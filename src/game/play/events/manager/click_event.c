/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** click_event.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../../../include/game.h"

void manage_play_click(game_t *game, sfMouseButtonEvent click)
{
    sfVector2f point = {(float) click.x, (float) click.y};
    lx_sprite_t *collider = lx_sprite_list_collide_point(
    game->play->frame->sprites->objects, point);
    bird_t *bird;

    if (collider == NULL)
        return;
    bird = get_bird_from_sprite(game, collider);
    if (bird == NULL)
        return;
    kill_bird(game, bird);
}
