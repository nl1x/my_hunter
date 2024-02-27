/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_readbuf.c
** Author: nathan.jeannot@epitech.eu
*/

#include <unistd.h>
#include "../my.h"

char *my_readlink(char *file)
{
    char tmpbuf[2048] = { 0 };
    int read_size = readlink(file, tmpbuf, 2047);
    char *buf = my_strclone(tmpbuf);

    while (read_size == 2047) {
        read_size = readlink(file, tmpbuf, 2047);
        my_realloc(buf, read_size);
        my_strcat(buf, tmpbuf);
    }
    return buf;
}
