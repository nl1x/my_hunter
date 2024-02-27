/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** display.c
** Author: nathan.jeannot@epitech.eu
*/

#include "lx_csfml_lib.h"

void lx_text_display(lx_text_t *text, lx_window_t *win)
{
    sfRenderWindow_drawText(win->object, text->object, NULL);
}
