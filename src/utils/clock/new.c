/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** new.c
** Author: nathan.jeannot@epitech.eu
*/

#include <SFML/Window.h>

sfClock *lx_clock_new(void)
{
    return sfClock_create();
}
