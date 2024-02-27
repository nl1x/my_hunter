/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_get_by_data.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

lnklst_t *my_lnk_get_by_data(lnklst_t *list, void *data)
{
    lnklst_t *next = list;

    while (next != NULL && next->data != data)
        next = next->next;
    return next;
}
