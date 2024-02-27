/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** add.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

void lx_children_add(lx_children_t *children, void *child)
{
    children->amount++;
    my_lnk_push(&children->objects, child);
}
