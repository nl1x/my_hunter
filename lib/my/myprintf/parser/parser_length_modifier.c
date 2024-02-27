/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** parser_length_modifier.c
*/

#include <stdlib.h>
#include "../my_parser.h"
#include "../../my.h"

int is_length_modifier(char to_check)
{
    int is_lm;
    int i = 0;
    char lm_tab[] = "hlLqjzt";

    while (lm_tab[i] != '\0' && lm_tab[i] != to_check)
        i++;
    is_lm = lm_tab[i] != '\0';
    return is_lm;
}

int complete_parser_length_modifier(char *str, parser_t *parser)
{
    int k = 0;

    while (is_length_modifier(str[k]))
        k++;
    free(parser->length_modifier);
    parser->length_modifier = malloc(sizeof(char) * k + 1);
    my_strncpy(parser->length_modifier, str, k);
    parser->length_modifier[k] = '\0';
    return k;
}
