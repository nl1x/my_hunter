/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** get.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Window.h>

double lx_clock_get_seconds(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);

    return time.microseconds / 1000000.0;
}

long long lx_clock_get_micro_secs(sfClock *clock)
{
    sfTime time = sfClock_getElapsedTime(clock);

    return time.microseconds;
}
