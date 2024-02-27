/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** is_lib.c
*/

#include "../my.h"

int get_digit(long int nb, int i)
{
    return nb % my_compute_power_rec(10, i) / my_compute_power_rec(10, i - 1);
}

void set_digit(long int *nb, int i, int digit)
{
    if (digit > 9)
        return;
    *nb += ((digit - get_digit(*nb, i)) * my_compute_power_rec(10, i - 1));
}
