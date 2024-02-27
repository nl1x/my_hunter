/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_calloc.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>

char *my_calloc(size_t size)
{
    char *str = malloc(size);

    for (size_t i = 0; i < size; i++)
        str[i] = '\0';
    return str;
}
