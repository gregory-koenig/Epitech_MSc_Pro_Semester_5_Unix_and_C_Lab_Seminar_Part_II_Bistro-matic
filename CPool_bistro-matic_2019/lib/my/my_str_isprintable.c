/*
** EPITECH PROJECT, 2019
** my_str_isprintable.c
** File description:
** CPool_Day06_2019
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < ' ' || str[i] > '~')
            return (0);
    return (1);
}
