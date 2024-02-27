/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_strcat_adv.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

char *my_strcat_adv(char *start, char *end)
{
    int end_len = my_strlen(end);

    start = my_realloc(start, end_len + 1);
    start = my_strcat(start, end);
    return start;
}
