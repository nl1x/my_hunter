/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Graphics.h>
#include <malloc.h>

sfIntRect *lx_rect_new(int top, int left, int width, int height)
{
    sfIntRect *rect = malloc(sizeof(sfIntRect));

    rect->top = top;
    rect->left = left;
    rect->width = width;
    rect->height = height;
    return rect;
}
