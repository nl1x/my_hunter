/*
** EPITECH PROJECT, 2023
** get conv tab
** File description:
** tab the sort the format
*/

#include "../my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int is_conversion(char to_check)
{
    char *conversion = "bdiouxXeEfFgGaAcspn";

    for (int i = 0; conversion[i] != '\0'; i++) {
        if (to_check == conversion[i])
            return 1;
    }
    return 0;
}

int is_flag(char to_check)
{
    char flags[] = "bdiouxXeEfFgGaAcspnhlLqjzt.*$#0123456789- +%";
    int i = 0;
    int is_found = 0;

    while (!is_found && flags[i] != '\0') {
        is_found = flags[i] == to_check;
        i++;
    }
    return is_found;
}

void save_selection(my_tab_t *tab, char *format, int sel_start, int sel_end)
{
    char *line;

    line = malloc(sizeof(char) * (sel_end + 2));
    my_strncpy(line, format + sel_start, sel_end + 1);
    line[sel_end + 1] = '\0';
    my_tab_add_line(tab, line);
    free(line);
}

static int is_real_percent(char *format, int sel_start, int sel_end)
{
    int is_real = 1;
    int i = 0;

    while (i <= sel_end && is_real) {
        is_real = is_flag(format[sel_start + i]);
        i++;
    }
    return is_real;
}

int is_end_of_selection(char *format, int sel_start, int *sel_end)
{
    int is_end;
    int is_real_p = format[sel_start] == '%'
        && is_real_percent(format, sel_start, *sel_end);
    int is_conv = is_conversion(format[sel_start + *(sel_end)]);
    int is_flag_ = is_flag(format[sel_start + *sel_end]);

    if (is_real_p)
        is_end = is_conv || format[sel_start + *(sel_end)] == '%' || !is_flag_;
    else {
        is_end = format[sel_start + *sel_end] == '%'
            || format[sel_start + *sel_end] == '\0';
        if (is_end)
            *(sel_end) -= 1;
    }
    return is_end;
}

my_tab_t *get_conv_tab(char *format)
{
    my_tab_t *conv_tab = my_tab_init();
    int sel_start = 0;
    int sel_end = 1;

    do {
        if (is_end_of_selection(format, sel_start, &sel_end)) {
            save_selection(conv_tab, format, sel_start, sel_end);
            sel_start += sel_end + 1;
            sel_end = 0;
        }
        sel_end++;
    } while (format[sel_start + sel_end - 1] != '\0');
    return conv_tab;
}
