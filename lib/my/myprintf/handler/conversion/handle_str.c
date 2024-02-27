/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_str.c
*/

#include "../../../my.h"
#include "../../my_parser.h"
#include <stdarg.h>

int handle_str(parser_t *parser, va_list *ap, int size)
{
    char *arg = va_arg(*ap, char *);
    int arg_length = my_strlen(arg);
    char *width = handle_width(parser, arg_length);
    char *precision = handle_precision(parser, arg_length, arg);
    flag_arguments_t *flag_args = malloc(sizeof(flag_arguments_t));

    flag_args->precision = precision;
    flag_args->width = width;
    size += handle_minus_flag(parser, flag_args);
    free(flag_args);
    free(width);
    free(precision);
    return size;
}
