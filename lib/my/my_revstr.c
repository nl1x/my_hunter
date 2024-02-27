/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    int strlen = my_strlen(str);

    for (int i = 0; i < strlen / 2; i++) {
        my_swapchar(str + i, str + strlen - i - 1);
    }
    return str;
}
