/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_put_nbr.c
*/

#include "my.h"

static int count_digits(int nb)
{
    int nb_digits = 0;

    do {
        nb_digits++;
        nb /= 10;
    } while (nb != 0);
    return nb_digits;
}

static void put_nbr(int nb, int nb_digits)
{
    for (int i = nb_digits; i >= 1; i--)
        my_putchar('0' + get_digit(nb, i));
}

int my_put_nbr(int nb)
{
    int nb_digits;
    int neg_nb = (nb < 0);

    if (neg_nb) {
        my_putchar('-');
        nb = -nb;
    }
    nb_digits = count_digits(nb);
    put_nbr(nb, nb_digits);
    return nb_digits + neg_nb;
}
