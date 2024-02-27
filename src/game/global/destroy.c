/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

static
void destroy_bird(void *data)
{
    bird_t *bird = data;

    lx_sprite_destroy(bird->sprite);
    if (bird->next_position != NULL)
        free(bird->next_position);
    if (bird->current_position != NULL)
        free(bird->current_position);
    if (bird->velocity != NULL)
        free(bird->velocity);
}

static
void destroy_play(play_t *play)
{
    if (play == NULL)
        return;
    lx_sprite_destroy(play->score->sprite);
    lx_text_destroy(play->score->text);
    lx_text_destroy(play->score->shadow);
    lx_frame_destroy(play->frame);
    my_lnk_destroy(play->birds->objects, &destroy_bird);
    free(play);
}

static
void destroy_menu(menu_t *menu)
{
    if (menu == NULL)
        return;
    lx_frame_destroy(menu->frame);
    my_lnk_destroy(menu->buttons, (void (*)(void *)) &lx_sprite_destroy);
    lx_sprite_destroy(menu->dog);
    sfClock_destroy(menu->dog_anim_clock);
    free(menu);
}

void destroy_game(game_t *game)
{
    if (game == NULL)
        return;
    destroy_play(game->play);
    destroy_menu(game->menu);
    sfClock_destroy(game->delta_clock);
    lx_window_destroy(game->win);
    free(game);
}
