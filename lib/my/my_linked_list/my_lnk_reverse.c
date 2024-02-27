/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_reverse.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

void my_lnk_reverse(lnklst_t **list)
{
    lnklst_t *head = my_lnk_get_end(*list);
    lnklst_t *current = *list;
    lnklst_t *prv;

    while (current != NULL) {
        prv = current->prev;
        current->prev = current->next;
        current->next = prv;
        current = current->prev;
    }
    *list = head;
}
