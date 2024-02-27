/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strstr.c
*/

#include <stddef.h>

static int starts_with(char *str, char const *tf, int i, int j)
{
    while (tf[j] != '\0' && str[i + j] != '\0' && tf[j] == str[i + j]) {
            j++;
        }
    return j;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int frst_char = -1;

    while (str[i] != '\0') {
        j = starts_with(str, to_find, i, j);
        if (to_find[j] == '\0') {
            frst_char = i;
            break;
        }
        frst_char = -1;
        j = 0;
        i++;
    }
    if (frst_char == -1)
        return NULL;
    return str + frst_char;
}
