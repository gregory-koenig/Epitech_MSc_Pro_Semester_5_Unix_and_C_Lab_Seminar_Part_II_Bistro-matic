/*
** EPITECH PROJECT, 2019
** my
** File description:
** C Pool Bistro-matic
*/

#pragma once

/* C Pool Day 03 */
void my_putchar(char);
int my_isneg(int);
int my_put_nbr(int);

/* C Pool Day 04 */
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
void my_sort_int_array(int *, int);

/* C Pool Day 05 */
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);

/* C Pool Day 06 */
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *);

/* C Pool Day 07 */
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);

/* C Pool Day 08 */
char *my_strdup(char const *src);
char *concat_params(int argc, char **argv);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);
char *convert_base(char const *nbr, char const *base_from,
        char const *base_to);

/* C Pool Day 09 */
int my_show_param_array(struct info_param const *par);

/* C Pool Day 10 */
int my_sort_word_array(char **tab);
int my_advanced_sort_word_array(char **tab, int(*cmp)(char const *,
        char const *));

/* C Pool Bistro-matic */
int check_sort(int *array, int size);
char **alloc_dest(char **dest, char const *str);
char *clean_str(char *str);
int is_alpha(char c);
int is_number(char c);
char *eval_expr(char const *base, char const *ops,
                char const *expr, unsigned int size);
char *inf_add(char const *nb0, char const *nb1);
char *inf_rev(char const *str, int max_lenght);
char *del_zero(char *str);
void freeing_all(char *rev_nb0, char *rev_nb1);
