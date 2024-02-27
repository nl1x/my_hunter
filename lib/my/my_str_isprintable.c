/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_isprintable.c
*/

#include "my.h"

int my_str_isprintable(char const *str)
{
    int i = 0;
    int is_printable = 1;

    while (str[i] != '\0' && is_printable) {
        is_printable = is_char_printable(str[i]);
        i++;
    }
    return is_printable;
}
