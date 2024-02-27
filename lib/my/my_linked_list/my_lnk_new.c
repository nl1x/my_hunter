/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_new.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

lnklst_t *my_lnk_new(void *data)
{
    lnklst_t *list = malloc(sizeof(lnklst_t));

    list->data = data;
    list->next = NULL;
    list->prev = NULL;
    return list;
}
