/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/System/Vector2.h>
#include <malloc.h>

sfVector2f *lx_vector2f(float x, float y)
{
    sfVector2f *vector2f = malloc(sizeof(sfVector2f));

    vector2f->x = x;
    vector2f->y = y;
    return vector2f;
}
