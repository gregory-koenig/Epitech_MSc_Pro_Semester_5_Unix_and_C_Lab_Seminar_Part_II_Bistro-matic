/*
** EPITECH PROJECT, 2019
** Eval_expr
** File description:
** C Pool Bistro-matic
*/

#ifndef TEST
#define TEST
#define NUM(x) (x >= '0' && x <= '9')
#define OP(x) (x == '/' || x == '*' || x == '+' || x == '-' || x == '%')
#define OP_TEST(x) (x == '+' || x == '-')
#define OP_TEST_NEXT(x) (x == '*' || x == '%' || x == '/')
#define NEXT next_op->next != NULL

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;
typedef struct op_list {
    char *op;
    struct op_list *next;
} op_list_t;
void my_show_list(linked_list_t *list);
int my_put_in_list(linked_list_t **list, char *param);
void my_rev_list(linked_list_t **begin);
int my_nbrlen(char const *src, int start);
linked_list_t *my_cat_nbr(char const *src, int *start, linked_list_t *list);
char *give_arguments(linked_list_t *nbr_list, op_list_t *op_list);
void my_rev_op_list(op_list_t **begin);
int my_op_in_list(op_list_t **list, char *param);
void priority_gesture(linked_list_t **nbr_begin, op_list_t **op_begin);

#endif
