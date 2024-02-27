/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

static
void destroy_data(lnklst_t *list, void (*data_destroyer)(void *data))
{
    if (data_destroyer != NULL && list->data != NULL)
        data_destroyer(list->data);
}

void my_lnk_destroy(lnklst_t *list, void (*data_destroyer)(void *data))
{
    lnklst_t *next;

    while (list != NULL) {
        next = list->next;
        destroy_data(list, data_destroyer);
        free(list);
        list = next;
    }
}
