/*
** EPITECH PROJECT, 2023
** C-POOL
** File description:
** my.h.c
*/

#ifndef MY_LNKLST
    #define MY_LNKLST

    #define UNUSED __attribute__((unused))
    #define ABS(x) x < 0 ? -x : x

typedef struct linked_list {
    void *data;
    struct linked_list *next;
    struct linked_list *prev;
} lnklst_t;

lnklst_t *my_lnk_get_end(lnklst_t *list);
lnklst_t *my_lnk_get_by_data(lnklst_t *list, void *data);
void my_lnk_add(lnklst_t *list, void *data);
lnklst_t *my_lnk_remove(lnklst_t **list, void *data);
lnklst_t *my_lnk_new(void *data);
void my_lnk_push(lnklst_t **list, void *data);
void my_lnk_swap(lnklst_t *list1, lnklst_t *list2);
void my_lnk_sort(lnklst_t *list, int (*condition)(void *data, void *key));
void my_lnk_reverse(lnklst_t **list);
void my_lnk_destroy(lnklst_t *list, void (*data_destroyer)(void *data));
lnklst_t *my_lnk_get(lnklst_t *list, int index);
lnklst_t *my_lnk_clone_str(lnklst_t *list);

#endif

#ifndef MY_ALLOC
    #define MY_ALLOC
    #include <stdlib.h>

char *my_calloc(size_t size);
char *my_readlink(char *file);
char *my_realloc(char *buf, size_t additional_size);

#endif

#ifndef MY_LIB
    #define MY_LIB
    #include <stdlib.h>

int my_strstarts(char *str, char *start);
char *my_int_to_str(long long nb);

int count_occurences(char *str, char *substr);
char **split(char *str, char *separator);
int contains(char const *str, char c);
int get_int_length(int arg);

int get_digit(long int nb, int i);
void set_digit(long int *nb, int i, int digit);

int is_char_lower(char c);
int is_char_upper(char c);
int is_letter(char c);
int is_digit(char c);
int is_char_printable(char c);

char *my_strfill(char c, int size);
char *my_get_base(unsigned long long nb, int base);

void char_to_uppercase(char *c);
void char_to_lowercase(char *c);
void my_swapchar(char *a, char *b);

int my_printf(char *format, ...);
int my_puterr(char *err);
int my_put_double(double nb, int precision);
int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_isneg(int nb);
void my_swap(int *a, int *b);
int my_strlen(char const *str);
long my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
long int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strsub(char const *str, long start, long end);
char *my_strclone(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strcat_adv(char *start, char *end);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
int my_show_word_array(char const **tab);
#endif

#ifndef MY_TAB_H_
    #define MY_TAB_H_

typedef struct my_tab {
    char **tab;
    int len;
} my_tab_t;

my_tab_t *my_tab_init(void);
void my_tab_add_line(my_tab_t *ptr, const char *line);
void my_tab_destroy(my_tab_t *ptr);
my_tab_t *get_conv_tab(char *format);
char *return_nbr_base_x(int ten_base);
char *return_nbr_base_X(int ten_base);
#endif
