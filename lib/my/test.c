/*
** EPITECH PROJECT, 2019
** Eval_expr
** File description:
** C Pool Bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "test.h"

int my_nbrlen(char const *src, int start)
{
    int i;
    static int z = 0;

    for (i = 0; NUM(src[start]) && src[start] != '\0'; i++) {
        start++;
    }
    i++;
    z++;
    return (i);
}

op_list_t *my_cat_op(char const *src, int *start, op_list_t *link)
{
    char *op = malloc(sizeof(char) * 2);

    for (; OP(src[(*start)]) && *start < my_strlen(src); (*start)++) {
        op[0] = src[(*start)];
        op[1] = '\0';
        my_op_in_list(&link, op);
    }
    (*start)++;
    return (link);
}

linked_list_t *my_cat_nbr(char const *src, int *start, linked_list_t *link)
{
    int i = 0;
    char *nbr = malloc(sizeof(char ) * my_nbrlen(src, (*start)));

    for (; NUM(src[(*start)]) && *start < my_strlen(src); (*start)++) {
        nbr[i] = src[(*start)];
        i++;
    }
    (*start)++;
    nbr[i] = '\0';
    my_put_in_list(&link, nbr);
    return (link);
}

char *calculate(char const *str)
{
    char *result;
    linked_list_t *nbr_list = malloc(sizeof(*nbr_list));
    op_list_t *op_list = malloc(sizeof(*op_list));

    nbr_list = NULL;
    op_list = NULL;
    for (int start = 0; start < my_strlen(str);) {
        nbr_list = my_cat_nbr(str, &start, nbr_list);
    }
    for (int start = 0; start < my_strlen(str);) {
        op_list = my_cat_op(str, &start, op_list);
    }
    my_rev_list(&nbr_list);
    my_rev_op_list(&op_list);
    priority_gesture(&nbr_list, &op_list);
    result = give_arguments(nbr_list, op_list);
    return (result);
}
