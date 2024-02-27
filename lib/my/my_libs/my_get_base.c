/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** my_get_base.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../my.h"

static char get_char(int rest)
{
    char c;

    if (rest > 9)
        c = 'a' + (rest - 10);
    else
        c = '0' + rest;
    return c;
}

static char *remalloc(char *str)
{
    int str_length = my_strlen(str);
    char *new = my_calloc(str_length + 2);

    my_strcat(new + 1, str);
    free(str);
    return new;
}

char *my_get_base(unsigned long long nb, int base)
{
    int rest;
    char *result = my_calloc(sizeof(char));

    while (nb > 0) {
        rest = nb % base;
        result = remalloc(result);
        result[0] = get_char(rest);
        nb /= base;
    }
    return result;
}
