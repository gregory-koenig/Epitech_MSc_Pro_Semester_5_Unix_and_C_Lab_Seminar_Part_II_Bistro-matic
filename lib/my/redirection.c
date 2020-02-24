/*
** EPITECH PROJECT, 2019
**
** File description:
** C Pool Bistro-matic
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include "test.h"
#include "operations.h"

char *check_operation(char *nbr1, char *nbr2, char op)
{
    char *(*ptrCalculate)(nb1, nb2);

    switch (op) {
        case '+':
            ptrCalculate = operationlist[0];
            return ((*ptrCalculate)(nbr1, nbr2));
        case '-':
            ptrCalculate = operationlist[1];
            write(1, "InfinSub\n", 9);
            break;
        case '*':
            ptrCalculate = operationlist[2];
            write(1, "InfinMul\n", 9);
            break;
        case '/':
            ptrCalculate = operationlist[3];
            write(1, "InfinDiv\n", 9);
            break;
        case '%':
            ptrCalculate = operationlist[4];
            write(1, "InfinMod\n", 9);
            break;
    }
    return (0);
}

char *calc(char *str1, char op, char *str2)
{
    return (check_operation(str1, str2, op));
}

char *give_arguments(linked_list_t *nbr_list, op_list_t *op_list)
{
    linked_list_t *nbr_tmp;
    linked_list_t *next_tmp;
    op_list_t *op_tmp;

    nbr_tmp = nbr_list;
    next_tmp = nbr_list->next;
    op_tmp = op_list;
    while (next_tmp != NULL && op_tmp != NULL) {
        next_tmp->data = calc(nbr_tmp->data, op_tmp->op[0], next_tmp->data);
        nbr_tmp = nbr_tmp->next;
        next_tmp = nbr_tmp->next;
        op_tmp = op_tmp->next;
    }
    return (nbr_tmp->data);
}
