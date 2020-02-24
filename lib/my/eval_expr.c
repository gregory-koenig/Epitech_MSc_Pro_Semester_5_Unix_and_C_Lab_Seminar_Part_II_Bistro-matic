/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** C Pool Bistro-matic
*/

#include <stdlib.h>
#include "my.h"
#include "test.h"

char *get_parentheses(char *str, int i)
{
    int opened = 0;
    int closed = 0;
    char *temp;
    int count = i;
    int j = 0;

    for (; str[count] != '\0' && !(str[count] == ')' && opened - 1 == closed);
        count++)
        if (str[count] == '(')
            opened++;
        else if (str[count] == ')')
            closed++;
    temp = malloc(sizeof(char) * (count - i + 2));
    for (i += 1; i < count; i++) {
        temp[j] = str[i];
        j++;
    }
    temp[j] = '\0';
    return (temp);
}

char *int_to_char(int nb)
{
    char *str;
    int len = 0;
    int number = nb;
    int final;

    for (; number > 0; len++)
        number /= 10;
    str = malloc(sizeof(char) * (len + 1));
    final = len;
    number = len - 1;
    for (; len > 0; len--) {
        str[number] = (nb % 10 + 48);
        nb /= 10;
        number--;
    }
    str[final] = '\0';
    return (str);
}

int find_close(char *str, int i)
{
    for (; str[i] != '\0' && str[i] != ')'; i++);
    return (i + 1);
}

char *replace_parentheses(char *str, int i, char *nb)
{
    char *new = malloc(sizeof(char) * my_strlen(str));
    int cursor = 0;
    int j = 0;

    for (; str[cursor] != '\0'; j++) {
        if (cursor == i) {
            new[j] = '\0';
            new = my_strcat(new, nb);
            cursor = find_close(str, i);
            j = my_strlen(new) - 1;
        } else {
            new[j] = str[cursor];
            cursor++;
        }
    }
    new[j] = '\0';
    return (new);
}

char *eval_expr(char const *base, char const *ops,
		char const *expr, unsigned int size)
{
    char *tmp;
    char *str = malloc(sizeof(char) * my_strlen(str) + 1);
    char *result;
    int op = 0;

    str = my_strcat(str, expr);
    for (int i = 0; expr[i] != '\0'; i++) {
        op = 0;
        for (int z = 0; str[z] != '\0'; z++)
            if (OP(str[z]))
                op++;
        if (expr[i] == '(') {
            tmp = get_parentheses(str, i);
            str = replace_parentheses(str, i, eval_expr(base, ops, tmp, size));
        }
        if (op > 0)
            str = calculate(str);
    }
    return (str);
}
