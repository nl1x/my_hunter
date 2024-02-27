/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_strlowcase.c
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 'a' - 'A';
        i++;
    }
    return str;
}
