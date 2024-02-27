/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strncat.c
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (i < nb && src[i] != '\0') {
        dest[i + dest_len] = src[i];
        i++;
    }
    dest[i + dest_len] = '\0';
    return dest;
}
