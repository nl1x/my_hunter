/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[i + dest_len] = src[i];
        i++;
    }
    dest[i + dest_len] = '\0';
    return dest;
}
