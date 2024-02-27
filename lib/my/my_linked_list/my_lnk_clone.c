/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** my_lnk_clone_str.c
** Author: nathan.jeannot@epitech.eu
*/

#include "../my.h"

lnklst_t *my_lnk_clone_str(lnklst_t *list)
{
    lnklst_t *clone = my_lnk_new(NULL);

    while (list != NULL) {
        my_lnk_add(clone, my_strclone(list->data));
        list = list->next;
    }
    my_lnk_remove(&clone, NULL);
    return clone;
}
