/*
** EPITECH PROJECT, 2023
** myhunter
** File description:
** edit.c
** Author: nathan.jeannot@epitech.eu
*/

#include "game.h"

void lx_text_edit_value(lx_text_t *text, char *value)
{
    sfText_setString(text->object, value);
}
