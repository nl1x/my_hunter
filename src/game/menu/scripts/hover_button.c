/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** hover_button.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdio.h>
#include "../../../../include/game.h"

void hover_button(game_t *game, lx_sprite_t *button)
{
    lnklst_t *buttons = game->menu->buttons;
    lx_sprite_t *menu_button;

    while (buttons != NULL) {
        menu_button = buttons->data;
        if (menu_button != button)
            lx_sprite_set_texture(menu_button, 0);
        else
            lx_sprite_set_texture(menu_button, 1);
        buttons = buttons->next;
    }
}
