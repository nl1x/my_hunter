/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my_str_to_word_array.c
*/

#include "my.h"
#include <stdlib.h>

static int is_alphanum(char c)
{
    return c != '\0' && (is_digit(c) || is_letter(c));
}

static int count_words(char const *str)
{
    int i = 0;
    int nb_words = 0;

    while (str[i] != '\0') {
        while (str[i] != '\0' && is_alphanum(str[i]))
            i++;
        nb_words++;
        while (str[i] != '\0' && !is_alphanum(str[i]))
            i++;
    }
    return nb_words;
}

static int cound_letters(char const *str)
{
    int i = 0;

    while (is_alphanum(str[i]))
        i++;
    return i;
}

static char **allocate_strings(char **tab, char const *str)
{
    int current_char = 0;
    int current_word = 0;
    int nb_letters;

    while (str[current_char] != '\0') {
        nb_letters = cound_letters(str + current_char);
        if (nb_letters == 0) {
            current_char++;
            continue;
        }
        tab[current_word] = malloc((nb_letters + 1) * sizeof(char));
        my_strncpy(tab[current_word], str + current_char, nb_letters);
        current_char += nb_letters;
        current_word++;
    }
    return tab;
}

static char **allocate_array(int size)
{
    char **tab = malloc((size + 1) * sizeof(char *));

    tab[size] = NULL;
    return tab;
}

char **my_str_to_word_array(char const *str)
{
    char **tab;
    int nb_words = count_words(str);

    tab = allocate_array(nb_words);
    allocate_strings(tab, str);
    return tab;
}
