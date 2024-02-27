/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_octal.c
*/

#include "../../../my.h"
#include "../../my_parser.h"
#include <stdarg.h>

int handle_octal(parser_t *parser, va_list *ap, int size)
{
    int arg_int = va_arg(*ap, int);
    char *arg = my_get_base(arg_int, 8);
    int arg_length = my_strlen(arg);
    char *width = handle_width(parser, arg_length);
    char *precision = handle_precision(parser, arg_length, arg);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->width = width;
    flag_args->precision = precision;
    flag_args->arg_str = arg;
    if (parser->conversion == 'X')
        arg = my_strupcase(arg);
    size += handle_flag_minus_o(parser, flag_args);
    free(flag_args);
    free(arg);
    free(width);
    free(precision);
    return size;
}
