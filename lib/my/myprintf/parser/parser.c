/*
** EPITECH PROJECT, 2023
** parser/parser
** File description:
** check_tab + fill parser
*/

#include "../my_parser.h"
#include "../../my.h"
#include <stdlib.h>

static parser_t *parser_init(void)
{
    parser_t *parser = malloc(sizeof(parser_t));

    parser->flags = malloc(sizeof(char));
    parser->flags[0] = '\0';
    parser->width = -1;
    parser->precision = -1;
    parser->length_modifier = malloc(sizeof(char));
    parser->length_modifier[0] = '\0';
    parser->conversion = '\0';
    return parser;
}

parser_t *fill_parser(char *convtab_line)
{
    int k = 0;
    parser_t *parser = parser_init();
    char *str = convtab_line;

    k += complete_parser_flag(str, parser);
    k += complete_parser_width(str + k, parser);
    k += complete_parser_precision(str + k, parser);
    k += complete_parser_length_modifier(str + k, parser);
    complete_conversion(str + k, parser);
    return parser;
}

void destroy_parser(parser_t *parser)
{
    free(parser->length_modifier);
    free(parser->flags);
    free(parser);
}
