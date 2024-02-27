/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_add.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

void my_lnk_add(lnklst_t *list, void *data)
{
    lnklst_t *end = my_lnk_get_end(list);

    end->next = malloc(sizeof(lnklst_t));
    end->next->data = data;
    end->next->prev = end;
    end->next->next = NULL;
}
