/*
** EPITECH PROJECT, 2023
** __
** File description:
** _
*/

#include <stdlib.h>
#include "../my.h"

static void tab_free(char **tab)
{
    if (tab == NULL)
        return;
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}

my_tab_t *my_tab_init(void)
{
    my_tab_t *ptr = malloc(sizeof(my_tab_t));

    if (ptr == NULL) {
        return NULL;
    }
    ptr->tab = NULL;
    ptr->len = 0;
    return ptr;
}

void my_tab_destroy(my_tab_t *ptr)
{
    if (ptr == NULL)
        return;
    tab_free(ptr->tab);
    free(ptr);
}

void my_tab_add_line(my_tab_t *ptr, const char *line)
{
    char **tab;

    if (ptr == NULL || line == NULL)
        return;
    tab = malloc(sizeof(char *) * (ptr->len + 1 + 1) + 1);
    if (tab == NULL)
        return;
    if (ptr->tab != NULL) {
        for (int i = 0; ptr->tab[i] != NULL; i++) {
            tab[i] = malloc(sizeof(char) * (my_strlen(ptr->tab[i]) + 1));
            tab[i] = my_strcpy(tab[i], ptr->tab[i]);
        }
    }
    tab[ptr->len] = malloc(sizeof(char) * (my_strlen(line) + 1));
    tab[ptr->len] = my_strcpy(tab[ptr->len], line);
    tab_free(ptr->tab);
    tab[ptr->len + 1] = NULL;
    ptr->tab = tab;
    ptr->len += 1;
}
