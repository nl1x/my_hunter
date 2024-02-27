/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_strsub.c
** Author: nathan.jeannot@epitech.eu
*/

#include "./my.h"

char *my_strsub(char const *str, long start, long end)
{
    long length = my_strlen(str);
    char *res;

    if (str == NULL || start > end || start < 0 || start > length || end < 0
        || end > length)
        return "";
    res = malloc((end - start + 2) * sizeof(char));
    for (long i = start; i <= end && str[i] != '\0'; i++)
        res[i - start] = str[i];
    res[end - start + 1] = '\0';
    return res;
}
