/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** my_strfill.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

char *my_strfill(char c, int size)
{
    char *str = malloc(sizeof(char) * size + 1);

    for (int i = 0; i < size; i++)
        str[i] = c;
    str[size] = '\0';
    return str;
}
