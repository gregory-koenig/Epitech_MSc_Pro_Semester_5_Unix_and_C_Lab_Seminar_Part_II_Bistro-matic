/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** C Pool Bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "test.h"

void my_show_list(linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_putstr(tmp->data);
        write(1, "\n", 1);
        tmp = tmp->next;
    }
    write(1, "\n", 1);
}

void my_show_op_list(op_list_t *list)
{
    op_list_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        my_putstr(tmp->op);
        write(1, "\n", 1);
        tmp = tmp->next;
    }
    write(1, "\n", 1);
}

void reordering(linked_list_t **nbr_begin, op_list_t **op_begin)
{
    linked_list_t *nbr = *nbr_begin;
    linked_list_t *next_nbr = NULL;
    void *nbr_tmp;
    op_list_t *op = *op_begin;
    op_list_t *next_op = NULL;
    char op_tmp;

    next_nbr = nbr->next;
    next_op = op->next;
    op_tmp = op->op[0];
    op->op[0] = next_op->op[0];
    next_op->op[0] = op_tmp;
    nbr_tmp = nbr->data;
    nbr->data = next_nbr->data;
    next_nbr->data = nbr_tmp;
    nbr = nbr->next;
    next_nbr = next_nbr->next;
    nbr_tmp = nbr->data;
    nbr->data = next_nbr->data;
    next_nbr->data = nbr_tmp;
}

void priority_gesture(linked_list_t **nbr_begin, op_list_t **op_begin)
{
    linked_list_t *nbr = *nbr_begin;
    linked_list_t *next_nbr = NULL;
    op_list_t *op = *op_begin;
    op_list_t *next_op = NULL;

    next_nbr = nbr->next;
    next_op = op->next;
    while (next_op != NULL) {
        if (OP_TEST(op->op[0]) && OP_TEST_NEXT(next_op->op[0]) && NEXT)
            reordering(nbr_begin, op_begin);
        op = op->next;
        nbr = nbr->next;
        next_nbr = nbr->next;
        next_op = op->next;
    }
}
