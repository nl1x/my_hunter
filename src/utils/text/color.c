/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** color.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void lx_text_set_color(lx_text_t *text, sfColor color)
{
    text->fg = color;
    sfText_setColor(text->object, color);
}
