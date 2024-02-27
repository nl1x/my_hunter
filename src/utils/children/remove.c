/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** remove.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../../../include/lx_csfml_lib.h"

void lx_children_remove(lx_children_t *children, void *child)
{
    if (my_lnk_remove(&children->objects, child) != 0)
        children->amount--;
}
