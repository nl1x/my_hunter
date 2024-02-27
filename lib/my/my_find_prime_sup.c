/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_find_prime_sup.c
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    int i = nb;

    while (!my_is_prime(i))
        i++;
    return i;
}
