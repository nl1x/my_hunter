/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_precision_d.c
*/

#include "../../my_parser.h"

static void fill_of_zero(char *str, int size)
{
    int i = 0;

    while (i < size) {
        str[i] = '0';
        i++;
    }
    str[i] = '\0';
}

char *handle_precision_d(parser_t *parser, UNUSED char *arg, int arg_length)
{
    int nb_char = parser->precision - arg_length;
    char *str = NULL;

    nb_char = nb_char < 0 ? 0 : nb_char;
    str = malloc(sizeof(char) * (nb_char + 1));
    fill_of_zero(str, nb_char);
    return str;
}
