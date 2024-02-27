/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strcapitalize.c
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    int i = 1;

    char_to_uppercase(str);
    while (str[i] != '\0') {
        if (is_letter(str[i]) && !is_letter(str[i - 1]))
            char_to_uppercase(str + i);
        else
            char_to_lowercase(str + i);
        i++;
    }
    return str;
}
