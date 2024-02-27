/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_width.c
*/

#include <stdlib.h>
#include "../../../my.h"
#include "../../my_parser.h"

char *handle_width(parser_t *parser, int arg_length)
{
    char *width = NULL;
    int i = 0;

    while (FUNC_HANDLER_WIDTH[i].f != NULL) {
        if (FUNC_HANDLER_WIDTH[i].conversion == parser->conversion) {
            width = FUNC_HANDLER_WIDTH[i].f(parser, arg_length);
            break;
        }
        i++;
    }
    if (FUNC_HANDLER_WIDTH[i].conversion == '\0') {
        width = malloc(sizeof(char));
        width[0] = '\0';
    }
    return width;
}
