/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    int result;
    int i = 2;

    if (nb <= 1)
        result = 0;
    else
        result = 1;
    while (i < nb / 2 + 1 && result) {
        result = (nb % i) > 0;
        i++;
    }
    return result;
}
