/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** move.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include "../../../include/my.h"
#include "../../../include/lx_csfml_lib.h"

void lx_text_move(lx_text_t *text, sfVector2f velocity)
{
    sfVector2f text_pos = sfText_getPosition(text->object);

    text_pos.x += velocity.x;
    text_pos.y += velocity.y;
    sfText_setPosition(text->object, text_pos);
}
