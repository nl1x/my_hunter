/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** parser_width.c
*/

#include "../my_parser.h"
#include "../../my.h"
#include <stddef.h>

int is_width(char to_check)
{
    char width[] = "123456789";

    for (int i = 0; width[i] != '\0'; i++) {
        if (width[i] == to_check)
            return 1;
    }
    return 0;
}

int complete_parser_width(char *str, parser_t *parser)
{
    int i = 0;
    int width_local = 0;

    if (is_width(str[0]))
        width_local = my_getnbr(str);
    if (width_local < 0)
        width_local *= -1;
    parser->width = width_local;
    for (; width_local > 0; i++) {
        width_local /= 10;
    }
    return i;
}
