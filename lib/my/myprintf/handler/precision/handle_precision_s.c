/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_precision_s.c
*/

#include "../../../my.h"
#include "../../my_parser.h"

char *handle_precision_s(parser_t *parser, char *arg, int arg_length)
{
    int nb_char = parser->precision < 0 ? arg_length : parser->precision;
    char *str = my_calloc(sizeof(char) * (nb_char + 1));

    my_strncpy(str, arg, nb_char);
    return str;
}
