/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** C Pool Bistro-matic
*/

#ifndef CALC
#define CALC

int modulo(int nb1, int nb2);
int division(int nb1, int nb2);
int soustraction(int nb1, int nb2);
int addition(int nb1, int nb2);
int multiplication(int nb1, int nb2);
char *(*operationlist[5])(char *, char *) = {inf_add, NULL, NULL, NULL, NULL};
char *check_operation(char *nb1, char *nb2, char op);

#endif
