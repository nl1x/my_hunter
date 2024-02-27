/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_realloc.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

char *my_realloc(char *buf, size_t additional_size)
{
    int str_len = my_strlen(buf);
    char *bufcpy = my_strclone(buf);

    if (buf != NULL)
        free(buf);
    buf = my_calloc(sizeof(char) * (str_len + additional_size + 1));
    my_strcpy(buf, bufcpy);
    return buf;
}
