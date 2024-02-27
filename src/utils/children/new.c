/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "../../../include/lx_csfml_lib.h"

lx_children_t *lx_children_new(void)
{
    lx_children_t *children = malloc(sizeof(lx_children_t));

    children->amount = 0;
    children->objects = NULL;
    return children;
}
