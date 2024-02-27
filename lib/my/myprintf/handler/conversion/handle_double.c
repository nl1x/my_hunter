/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_double.c
*/

#include "../../../my.h"
#include "../../my_parser.h"
#include <stdarg.h>

static int get_length(parser_t *parser, int arg)
{
    int i = 0;

    while (arg > 0) {
        arg /= 10;
        i++;
    }
    return i + parser->precision + (parser->precision > 0);
}

int handle_double(parser_t *parser, va_list *ap, int size)
{
    double arg = va_arg(*ap, double);
    int arg_length = get_length(parser, (int) arg);
    char *width = handle_width(parser, arg_length);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->width = width;
    flag_args->arg_double = arg;
    size += handle_minus_flag(parser, flag_args);
    free(flag_args);
    free(width);
    return size;
}
