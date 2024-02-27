/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_strclone.c
** Author: nathan.jeannot@epitech.eu
*/

#include "my.h"

char *my_strclone(char const *str)
{
    int length = my_strlen(str);
    char *clone = my_calloc(sizeof(char) * (length + 1));

    for (int i = 0; i < length; i++)
        clone[i] = str[i];
    return clone;
}
