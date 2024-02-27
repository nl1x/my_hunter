/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_islower.c
*/

#include "my.h"

int my_str_islower(char const *str)
{
    int i = 0;
    int is_lower = 1;

    while (str[i] != '\0' && is_lower) {
        is_lower = is_char_lower(str[i]);
        i++;
    }
    return is_lower;
}
