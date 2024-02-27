/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** move_mouse_event.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void manage_menu_mouse_move_event(game_t *game, sfMouseMoveEvent mouse)
{
    sfVector2f point = { (float) mouse.x, (float) mouse.y };
    lnklst_t *sprites = game->menu->buttons;
    lx_sprite_t *collider = lx_sprite_list_collide_point(sprites, point);

    hover_button(game, collider);
}
