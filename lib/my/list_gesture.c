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

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
}

void my_rev_op_list(op_list_t **begin)
{
    op_list_t *prev = NULL;
    op_list_t *current = *begin;
    op_list_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin = prev;
}

int my_put_in_list(linked_list_t **list, char *param)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->data = param;
    element->next = *list;
    *list = element;
    return (0);
}

int my_op_in_list(op_list_t **list, char *param)
{
    op_list_t *element;

    element = malloc(sizeof(*element));
    element->op = param;
    element->next = *list;
    *list = element;
    return (0);
}
