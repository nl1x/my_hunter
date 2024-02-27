/*
** EPITECH PROJECT, 2023
** myprintf
** File description:
** handle_percent.c
*/

#include "../../../my.h"
#include "../../my_parser.h"

int handle_double_percent(
    UNUSED parser_t *parser, UNUSED va_list *ap, UNUSED int size
)
{
    return my_putchar('%');
}
