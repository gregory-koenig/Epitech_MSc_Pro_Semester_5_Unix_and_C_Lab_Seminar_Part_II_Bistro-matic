/*
** EPITECH PROJECT, 2019
** my_str_isnum.c
** File description:
** CPool_Day06_2019
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    return (1);
}
