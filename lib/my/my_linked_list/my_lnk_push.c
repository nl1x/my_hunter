/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** my_lnk_push.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stdio.h>
#include "../my.h"

static
lnklst_t *get_end(lnklst_t *list)
{
    lnklst_t *next;
    lnklst_t *prev;

    if (list == NULL)
        return NULL;
    next = list->next;
    prev = list;
    while (next != NULL) {
        prev = next;
        next = prev->next;
    }
    return prev;
}

void my_lnk_push(lnklst_t **list, void *data)
{
    lnklst_t *end = get_end(*list);
    lnklst_t *next;

    if (end == NULL) {
        end = malloc(sizeof(lnklst_t));
        end->next = NULL;
        end->prev = NULL;
        end->data = data;
        *list = end;
    } else {
        next = malloc(sizeof(lnklst_t));
        next->data = data;
        next->next = NULL;
        next->prev = end;
        end->next = next;
    }
}
