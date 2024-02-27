/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_int_to_str.c
** Author: nathan.jeannot@epitech.eu
*/

#include "my.h"

static
long long count_digits(long long nb)
{
    long long nb_digits = 0;

    do {
        nb_digits++;
        nb /= 10;
    } while (nb != 0);
    return nb_digits;
}

static
char *put_nbr(long long nb, long long nb_digits)
{
    char *buf = my_calloc(sizeof(char) * 2);
    char int_buf[2] = { 0 };

    if (nb < 0) {
        int_buf[0] = '-';
        buf = my_strcat_adv(buf, int_buf);
        nb *= -1;
    }
    for (long long i = nb_digits; i >= 1; i--) {
        int_buf[0] = '0' + get_digit(nb, i);
        buf = my_strcat_adv(buf, int_buf);
    }
    return buf;
}

char *my_int_to_str(long long nb)
{
    long long nb_digits;

    nb_digits = count_digits(nb < 0 ? -nb : nb);
    return put_nbr(nb, nb_digits);
}
