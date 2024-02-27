/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    return len;
}
