/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_compute_power_rec.c
*/

long int my_compute_power_rec(int n, int p)
{
    long int result = n;

    if (p == 0) {
        result = 1;
    } else if (p < 0) {
        result = 0;
    } else {
        result *= my_compute_power_rec(n, p - 1);
    }
    return result;
}
