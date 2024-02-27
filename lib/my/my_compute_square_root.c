/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int result;
    int i = 0;

    while (i <= nb / 2 + 2 && i * i != nb)
        i++;
    if (i > nb / 2 + 2)
        result = 0;
    else
        result = i;
    return result;
}
