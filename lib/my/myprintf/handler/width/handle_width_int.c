/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_width_int.c
*/

#include "../../../my.h"
#include "../../my_parser.h"

static char *get_str(char c, int size)
{
    char *str = malloc(sizeof(char) * (size + 1));
    int i = 0;

    while (i < size) {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return str;
}

static int get_nb_char(parser_t *parser, int arg_length)
{
    if (parser->precision)
        return parser->width - parser->precision;
    else
        return parser->width - arg_length;
}

char *handle_width_d(parser_t *parser, int arg_length)
{
    char character = ' ';
    int nb_char = get_nb_char(parser, arg_length);

    nb_char = (nb_char < 0) ? 0 : nb_char;
    return get_str(character, nb_char);
}
