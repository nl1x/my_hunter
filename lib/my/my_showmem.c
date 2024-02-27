/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_showmem.c
*/

#include "./my.h"

int my_showmem(char const *str, int size)
{
    return my_putstr(str) + size;
}
