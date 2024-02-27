/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_puterr.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>
#include "my.h"

int my_puterr(char *err)
{
    return write(STDERR_FILENO, err, sizeof(char) * my_strlen(err));
}
