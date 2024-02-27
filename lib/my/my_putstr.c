/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    return write(STDOUT_FILENO, str, sizeof(char) * my_strlen(str));
}
