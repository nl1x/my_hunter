/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_sort.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

void my_lnk_sort(lnklst_t *list, int (*condition)(void *data, void *key))
{
    lnklst_t *i;
    lnklst_t *j;
    void *key;

    for (i = list; i != NULL && i->next != NULL; i = i->next) {
        key = i->data;
        j = i;
        while (j->prev != NULL && condition(j->prev->data, key)) {
            j->data = j->prev->data;
            j = j->prev;
        }
        j->data = key;
    }
}
