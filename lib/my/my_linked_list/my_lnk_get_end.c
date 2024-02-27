/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_get_end.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

lnklst_t *my_lnk_get_end(lnklst_t *list)
{
    lnklst_t *next = list->next;
    lnklst_t *prev = list;

    while (next != NULL) {
        prev = next;
        next = prev->next;
    }
    return prev;
}
