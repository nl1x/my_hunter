/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strupcase.c
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a' - 'A';
        i++;
    }
    return str;
}
