/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** parser_conversion.c
*/

#include <stdlib.h>
#include "../my_parser.h"
#include "../../my.h"

static int is_conv_f(char to_check)
{
    int is_lm;
    int i = 0;
    char lm_tab[] = "bdiouxXeEfFgGaAcspn%";

    while (lm_tab[i] != '\0' && lm_tab[i] != to_check)
        i++;
    is_lm = lm_tab[i] != '\0';
    return is_lm;
}

static void set_default_precision(parser_t *parser)
{
    switch (parser->conversion) {
        case 'f':
        case 'e':
            parser->precision = 6;
            break;
        case 's':
            parser->precision = -1;
            break;
        default:
            parser->precision = 0;
    }
}

int complete_conversion(char *str, parser_t *parser)
{
    int is_conv = is_conv_f(str[0]);

    parser->conversion = (is_conv ? str[0] : parser->conversion);
    if (parser->precision == DEFAULT_PRECISION)
        set_default_precision(parser);
    return is_conv;
}
