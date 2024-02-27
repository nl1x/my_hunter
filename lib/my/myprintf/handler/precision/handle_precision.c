/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_precision.c
*/

#include "../../../my.h"
#include "../../my_parser.h"

char *handle_precision(parser_t *parser, int arg_length, char *arg)
{
    char *str = NULL;
    int i = 0;

    while (FUNC_HANDLER_PRECISION[i].conversion != '\0') {
        if (FUNC_HANDLER_PRECISION[i].conversion == parser->conversion) {
            str = FUNC_HANDLER_PRECISION[i].f(parser, arg, arg_length);
            break;
        }
        i++;
    }
    return str;
}
