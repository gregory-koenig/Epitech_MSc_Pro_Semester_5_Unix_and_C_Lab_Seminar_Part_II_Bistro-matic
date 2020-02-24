/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** CPool_Day04_2019
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (i; str[i] != '\0'; i++);
    return (i);
}
