/*
** EPITECH PROJECT, 2023
** MyLib
** File description:
** my_lnk_get.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

lnklst_t *my_lnk_get(lnklst_t *list, int index)
{
    lnklst_t *result = list;
    int i = 0;

    while (result != NULL && i < index) {
        result = result->next;
        i++;
    }
    return result;
}
