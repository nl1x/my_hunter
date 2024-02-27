/*
** EPITECH PROJECT, 2023
** bsmyls
** File description:
** utils.c
** Author: nathan.jeannot@epitech.eu
*/

#include <stddef.h>
#include <malloc.h>
#include "../my.h"

int count_occurences(char *str, char *substr)
{
    int occurences = 0;
    char *substr_idx = my_strstr(str, substr);

    while (substr_idx != NULL) {
        occurences++;
        substr_idx = my_strstr(substr_idx + my_strlen(substr), substr);
    }
    return occurences;
}

static char *retrieve_line(char *start, char *separator)
{
    char *end = my_strstr(start, separator);
    long length = end != NULL ? end - start : my_strlen(start);
    char *line = my_calloc(sizeof(char) * (length + 1));

    for (int i = 0; i < length; i++) {
        line[i] = start[i];
    }
    line[length] = '\0';
    return line;
}

char **split(char *str, char *separator)
{
    int occurences = count_occurences(str, separator);
    char **tab = malloc(sizeof(char *) * (occurences + 2));
    char *line_start = str;
    int separator_length = my_strlen(separator);
    int i = 0;

    for (int j = 0; j < occurences + 2; j++)
        tab[j] = NULL;
    while (i < occurences + 1) {
        tab[i] = retrieve_line(line_start, separator);
        line_start = my_strstr(line_start, separator) + separator_length;
        i++;
    }
    return tab;
}

int contains(char const *str, char c)
{
    int i = 0;
    int found = 0;

    while (!found && str[i] != '\0') {
        found = str[i] == c;
        i++;
    }
    return found;
}

int get_int_length(int nb)
{
    int i = 0;

    while (nb > 0) {
        nb /= 10;
        i++;
    }
    return i;
}
