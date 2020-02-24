/*
** EPITECH PROJECT, 2019
** 
** File description:
** C Pool Bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#include "test.h"

char *inf_rev(char const *str, int max_lenght)
{
    char *reversed = malloc(sizeof(char) * (max_lenght + 1));
    int end = my_strlen(str) - 1;

    for (int i = 0; i < max_lenght; i++) {
        if (NUM(str[end]))
            reversed[i] = str[end];
        else
            reversed[i] = '0';
        if (end >= 0)
            end--;
    }
    return (reversed);
}

char *del_zero(char *str)
{
    int z = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] > '0' && str[i] <= '9') && z == 0) {
            str[z] = str[i];
            z++;
        } else if ((str[i] >= '0' && str[i] <= '9') && z > 0) {
            str[z] = str[i];
            z++;
        }
    }
    str[z] = '\0';
    if (str[0] == '\0') {
        str[0] = '0';
        str[1] = '\0';
    }
    return (str);
}

void freeing_all(char *rev_nb0, char *rev_nb1)
{
    free(rev_nb0);
    free(rev_nb1);
}
