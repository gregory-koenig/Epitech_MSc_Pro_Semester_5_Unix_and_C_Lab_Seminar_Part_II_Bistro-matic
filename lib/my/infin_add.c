/*
** EPITECH PROJECT, 2019
** infin_add
** File description:
** C Pool Bistro-matic
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *calculating_add(char const *nb0, char const *nb1, int lenght)
{
    char *result = malloc(sizeof(char) * (lenght + 1));
    int temp = 0;

    for (int i = 0; i < lenght; i++) {
        result[i] = (nb0[i] - '0') + (nb1[i] - '0') + temp;
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

char *inf_add(char const *nb0, char const *nb1)
{
    int lenght = ((my_strlen(nb0) < my_strlen(nb1)) ?
                    my_strlen(nb1) + 1 : my_strlen(nb0) + 1);
    char *result;
    char *rev_nb0;
    char *rev_nb1;

    rev_nb0 = inf_rev(nb0, lenght);
    rev_nb1 = inf_rev(nb1, lenght);
    result = del_zero(calculating_add(rev_nb0, rev_nb1, lenght));
    freeing_all(rev_nb0, rev_nb1);
    return (result);
}
