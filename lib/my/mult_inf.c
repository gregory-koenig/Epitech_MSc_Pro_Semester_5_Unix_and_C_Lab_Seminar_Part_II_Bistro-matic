/*
** EPITECH PROJECT, 2019
** mult_inf
** File description:
** C Pool Bistro-matic
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *calc_mult(char const *nb1, char const *nb2, int lenght)
{
    char *result = malloc(sizeof(char) * (lenght + 1));
    int temp = 0;

    for (int i = 0; i < lenght; i++) {
        result[i] = (nb1[i] - '0') * (nb2[i] - '0') + temp;
        if (result[i] >= 10) {
            temp = 0;
            result[i] = result[i] % 10;
            temp++;
        } else
            temp = 0;
        result[i] = result[i] + '0';
    }
    result = inf_rev(result, lenght);
    return (result);
}

char *mult_inf(char const *nb0, char const *nb1)
{
    int lenght = ((my_strlen(nb1) < my_strlen(nb2)) ?
                    my_strlen(nb2) + 1 : my_strlen(nb1) + 1);
    char *result;
    char *rev_nb1;
    char *rev_nb2;

    rev_nb0 = inf_rev(nb1, lenght);
    rev_nb1 = inf_rev(nb2, lenght);
    result = del_zero(calculating_inf(rev_nb1, rev_nb2, lenght));
    freeing_all(rev_nb1, rev_nb2);
    return (result);
}
