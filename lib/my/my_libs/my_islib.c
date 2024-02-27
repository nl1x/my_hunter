/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** is_lib.c
*/

int is_char_lower(char c)
{
    return (c >= 'a' && c <= 'z');
}

int is_char_upper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int is_letter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int is_char_printable(char c)
{
    return (c < '~' && c >= ' ');
}
