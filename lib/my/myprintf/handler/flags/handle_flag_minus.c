/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_minus_flag.c
*/

#include "../../../my.h"
#include "../../my_parser.h"

int handle_minus_flag(parser_t *parser, flag_arguments_t *flag_args)
{
    int size = 0;
    int i = 0;

    while (FUNC_HANDLER_FLAGS[i].conversion != '\0') {
        if (FUNC_HANDLER_FLAGS[i].conversion == parser->conversion) {
            size += FUNC_HANDLER_FLAGS[i].f(parser, flag_args);
            break;
        }
        i++;
    }
    return size;
}
