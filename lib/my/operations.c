/*
** EPITECH PROJECT, 2019
** eval_expr
** File description:
** C Pool Bistro-matic
*/

#include <unistd.h>

int multiplication(int nb1, int nb2)
{
    return (nb1 * nb2);
}

int addition(int nb1, int nb2)
{
    return (nb1 + nb2);
}

int soustraction(int nb1, int nb2)
{
    return (nb1 - nb2);
}

int division(int nb1, int nb2)
{
    if (nb2 == 0) {
        write(2, "Stop: division by zero\n", 23);
        return (84);
    }
    return (nb1 / nb2);
}

int modulo(int nb1, int nb2)
{
    if (nb2 == 0) {
        write(2, "Stop: modulo by zero\n", 21);
        return (84);
    }
    return (nb1 % nb2);
}
