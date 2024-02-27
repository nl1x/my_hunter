/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_lnk_swap.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

void my_lnk_swap(lnklst_t *list1, lnklst_t *list2)
{
    void *data1 = list1->data;

    list1->data = list2->data;
    list2->data = data1;
}
