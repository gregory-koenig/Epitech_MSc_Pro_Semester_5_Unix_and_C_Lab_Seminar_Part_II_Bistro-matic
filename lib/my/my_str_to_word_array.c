/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** C Pool Bistro-matic
*/

#include <stdlib.h>

int is_alpha(char c);
int is_number(char c);
int my_strlen(char const *);

char **alloc_dest(char **dest, char const *str)
{
    int word = 0;
    int j = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
        word += (is_alpha(str[i]) == 84 && is_number(str[i]) == 84) ? 1 : 0;
    dest = malloc(sizeof(char *) * (word + 2));
    word = 0;
    for (i = 0; str[i] != '\0'; i++)
        if ((is_alpha(str[i]) == 84 && is_number(str[i]) == 84)
            || str[i] == '\0') {
            dest[j] = malloc(sizeof(char) * (i - word + 1));
            word = i;
            j++;
        }
    if ((is_alpha(str[i]) == 84 && is_number(str[i]) == 84) || str[i] == '\0')
        dest[j] = malloc(sizeof(char) * (i - word + 1));
    dest[j + 1] = NULL;
    return (dest);
}

char *clean_str(char *str)
{
    char *result = malloc(sizeof(char) * my_strlen(str));
    int j = 0;
    int i = 0;

    for (i; is_alpha(str[i]) == 84 && is_number(str[i]) == 84; i++);
    for (i; str[i] != '\0'; i++) {
        if (is_alpha(str[i]) != 84 || is_number(str[i]) != 84) {
            result[j] = str[i];
            j++;
        } else if ((is_alpha(str[i]) == 84 && is_number(str[i]) == 84)
            && (is_alpha(str[i + 1]) != 84 || is_number(str[i]) != 84)) {
            result[j] = str[i];
            j++;
        }
    }
    return (result);
}

char **my_str_to_word_array(char const *str)
{
    char **dest = alloc_dest(dest, str);
    int j = 0;
    int i = 0;

    str = clean_str(str);
    for (int cursor = 0; str[cursor] != '\0'; cursor++)
        if (is_alpha(str[cursor]) == 84 && is_number(str[cursor]) == 84) {
            dest[i][j] = '\0';
            i++;
            j = 0;
        } else {
            dest[i][j] = str[cursor];
            j++;
        }
    dest[i][j] = '\0';
    dest[i + 1] = NULL;
    return (dest);
}
