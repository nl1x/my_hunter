/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** destroy.c
** Author: nathan.jeannot@epitech.eu
*/

#include <malloc.h>
#include "../../../include/lx_csfml_lib.h"

void lx_text_destroy(lx_text_t *text)
{
    if (text == NULL)
        return;
    sfText_destroy(text->object);
    sfFont_destroy(text->font);
    free(text);
}
