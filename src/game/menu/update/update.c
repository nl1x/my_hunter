/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** update.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

static
void check_dog_animation(game_t *game, lx_sprite_t *dog)
{
    sfVector2f dog_pos = sfSprite_getPosition(dog->object);

    if (dog_pos.x >= DOG_END_X) {
        game->menu->dog_anim = 0;
        lx_clock_restart(game->menu->dog_anim_clock);
    }
}

static
void check_dog_waiting(game_t *game, lx_sprite_t *dog)
{
    double sec = lx_clock_get_seconds(game->menu->dog_anim_clock);

    if (sec >= DOG_ANIM_INTERVAL) {
        lx_sprite_set_pos(dog, (sfVector2f) {DOG_START_POS});
        game->menu->dog_anim = 1;
    }
}

static
void update_dog(game_t *game)
{
    lx_sprite_t *dog = game->menu->dog;
    sfVector2f vel = (sfVector2f) {DOG_VELOCITY, 0};

    if (game->menu->dog_anim) {
        lx_sprite_move_dt(dog, vel, (float) game->dt);
        lx_sprite_update_texture(dog);
        check_dog_animation(game, dog);
    } else
        check_dog_waiting(game, dog);
}

void update_menu_frame(game_t *game)
{
    update_dog(game);
}
