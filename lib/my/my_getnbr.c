/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_getnbr.c
*/

#include "my.h"

static int find_digit(char const *str)
{
    int i = 0;

    while (str[i] != '\0' && !is_digit(str[i]))
        i++;
    return str[i] == '\0' ? -1 : i;
}

static int find_letter(char const *str)
{
    int i = 0;

    while (is_digit(str[i]))
        i++;
    return i;
}

static int find_sign(char const *str, int nb_start)
{
    int i = 1;
    int sign = 1;
    char value;

    do {
        value = str[nb_start - i];
        if (value == '-')
            sign = -sign;
        i++;
    } while (i <= nb_start && (value == '-' || value == '+'));
    return sign;
}

static
long build_nbr(char const *str, int nbr_length, int nb_start)
{
    int i = nbr_length;
    int j = nb_start;
    long nb = 0;

    while (i > 0) {
        set_digit(&nb, i, str[j] - '0');
        i--;
        j++;
    }
    return nb;
}

long my_getnbr(char const *str)
{
    long nb;
    int start = find_digit(str);
    int end;
    int sign = 1;

    if (start == -1)
        return 0;
    end = find_letter(str + start) + start;
    if (start > 0)
        sign = find_sign(str, start);
    nb = build_nbr(str, end - start, start);
    return nb < 0 ? 0 : nb * sign;
}
