/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** is_lib.c
*/

void char_to_uppercase(char *c)
{
    if (*c >= 'a' && *c <= 'z') {
        *c -= 'a' - 'A';
    }
}

void char_to_lowercase(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c += 'a' - 'A';
}

void my_swapchar(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}
