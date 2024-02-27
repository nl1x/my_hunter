/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** move.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>

void lx_rect_move(sfIntRect *rect, int offset, int max_value)
{
    if (rect->left + offset > max_value)
        rect->left = 0;
    else
        rect->left += offset;
}

void lx_rect_place(sfIntRect *rect, int x, int y)
{
    rect->left = x;
    rect->top = y;
}
