/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** parser_flag.c
*/

#include "../my_parser.h"
#include "../../my.h"
#include <stdlib.h>

static int is_flag_f(char to_check)
{
    char flags[] = "#+- 0";

    for (int i = 0; flags[i] != '\0'; i++) {
        if (flags[i] == to_check)
            return 1;
    }
    return 0;
}

int complete_parser_flag(char *str, parser_t *parser)
{
    int i = 1;

    while (is_flag_f(str[i]))
        i += 1;
    free(parser->flags);
    parser->flags = malloc(sizeof(char) * i);
    my_strncpy(parser->flags, str + 1, i - 1);
    parser->flags[i - 1] = '\0';
    return i;
}
