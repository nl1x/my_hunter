/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_isalpha.c
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    int i = 0;
    int is_alpha = 1;

    while (str[i] != '\0' && is_alpha) {
        is_alpha = is_letter(str[i]) || is_digit(str[i]);
        i++;
    }
    return is_alpha;
}
