/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_width_double.c
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

char *handle_width_f(parser_t *parser, int arg_length)
{
    char character = contains(parser->flags, '0') ? '0' : ' ';
    int nb_char = parser->width - arg_length;

    nb_char = (nb_char < 0) ? 0 : nb_char;
    return get_str(character, nb_char);
}
