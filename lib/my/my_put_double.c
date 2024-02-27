/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** my_put_double.c
*/

#include "my.h"

static int put_last_decimal(double nb)
{
    int digit;
    int size = 0;

    nb *= 100;
    digit = get_digit(nb, 2);
    size += my_put_nbr(digit + (get_digit(nb, 1) >= 5));
    return size;
}

int put_decimales(double nb, int precision)
{
    int i = 0;
    int size = 0;
    int digit;

    if (precision <= 0)
        return 0;
    my_putchar('.');
    while (i < precision - 1) {
        nb *= 10;
        digit = get_digit((int) nb, 1);
        size += my_put_nbr(digit);
        i++;
    }
    size += put_last_decimal(nb);
    return size + 1;
}

int my_put_double(double nb, int precision)
{
    int size = 0;

    size += my_put_nbr((int) nb);
    nb -= (int) nb;
    if (precision < 0)
        return size;
    else if (nb < 0)
        nb = -nb;
    size += put_decimales(nb, precision);
    return size;
}
