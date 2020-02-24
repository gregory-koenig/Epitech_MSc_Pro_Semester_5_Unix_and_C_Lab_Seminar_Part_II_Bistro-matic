/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** CPool_Day04_2019
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}
