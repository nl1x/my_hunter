/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

void lx_sprite_display(lx_sprite_t *sprite, lx_window_t *win)
{
    sfRenderWindow_drawSprite(win->object, sprite->object, NULL);
}
