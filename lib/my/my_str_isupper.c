/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_isupper.c
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;
    int is_upper = 1;

    while (str[i] != '\0' && is_upper) {
        is_upper = is_char_upper(str[i]);
        i++;
    }
    return is_upper;
}
