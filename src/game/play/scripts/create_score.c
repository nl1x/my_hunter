/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** create_score.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

static
lx_text_t *init_score_text(game_t *game)
{
    sfVector2f pos = {SCORE_TXT_X, SCORE_TXT_Y};
    lx_text_t *text = lx_text_new("0", FONT_PATH, FONT_SIZE, pos);
    sfVector2f pos_shadow = {SCORE_TXT_X - 3, SCORE_TXT_Y + 1};
    lx_text_t *text_shadow = lx_text_new(
    "0", FONT_PATH, FONT_SIZE, pos_shadow);
    sfColor color = sfColor_fromRGB(255, 200, 0);

    lx_text_set_color(text, color);
    lx_text_set_color(text_shadow, sfBlack);
    lx_children_add(game->play->frame->texts, text_shadow);
    lx_children_add(game->play->frame->texts, text);
    game->play->score->text = text;
    game->play->score->shadow = text_shadow;
    return text;
}

static
lx_sprite_t *init_score_sprite(game_t *game)
{
    sfIntRect *rect = lx_rect_new(0, 0, SCORE_SIZE);
    lx_sprite_t *score = lx_sprite_new(SCORE_PATH, rect, 1, -1);
    sfVector2f pos = (sfVector2f) {SCORE_POS_X, SCORE_POS_Y};

    lx_sprite_set_pos(score, pos);
    lx_sprite_scale(score, SCORE_SCALE);
    lx_children_add(game->play->frame->sprites, score);
    return score;
}

void create_score(game_t *game)
{
    game->play->score = malloc(sizeof(score_t));
    game->play->score->value = 0;
    game->play->score->sprite = init_score_sprite(game);
    init_score_text(game);
}
