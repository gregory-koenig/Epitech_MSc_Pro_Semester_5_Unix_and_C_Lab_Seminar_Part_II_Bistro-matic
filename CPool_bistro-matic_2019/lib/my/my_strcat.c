/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** CPool_Day07_2019
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);

    for (int j = 0; src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
