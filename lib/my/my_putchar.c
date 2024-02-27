/*
** EPITECH PROJECT, 2023
** MyLib
** File description:
** my_putchar.c
*/

#include <unistd.h>

int my_putchar(char c)
{
    return write(1, &c, sizeof(char));
}
