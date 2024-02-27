/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_isnum.c
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;
    int is_num = 1;

    while (str[i] != '\0' && is_num) {
        is_num = is_digit(str[i]);
        i++;
    }
    return is_num;
}
