/*
** EPITECH PROJECT, 2023
** myls
** File description:
** my_strstarts.c
** Author: nathan.jeannot@epitech.eu
*/

int my_strstarts(char *str, char *start)
{
    int starts = 1;
    int i = 0;

    while (starts && start[i] != '\0') {
        starts = str[i] == start[i];
        i++;
    }
    return starts;
}
