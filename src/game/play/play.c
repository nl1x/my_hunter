/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** play.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

static
void set_background(lx_frame_t *play_frame)
{
    sfVector2f bg_scaling = {BG_SCALING, BG_SCALING};

    lx_frame_set_background(play_frame, PLAY_BG_PATH);
    sfSprite_scale(play_frame->background->object, bg_scaling);
}

static
void add_birds(play_t *play)
{
    summon_bird(play);
}

void init_play(game_t *game)
{
    lx_frame_t *frame = lx_frame_new(&analyse_play_events, &update_play_frame,
    FRAME_PLAY);

    game->play = malloc(sizeof(play_t));
    game->play->frame = frame;
    game->play->birds = lx_children_new();
    lx_children_add(game->win->frames, frame);
    set_background(frame);
    add_birds(game->play);
    create_score(game);
}
