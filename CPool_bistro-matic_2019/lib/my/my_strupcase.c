/*
** EPITECH PROJECT, 2019
** my_strupcase.c
** File description:
** CPool_Day06_2019
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = (str[i] >= 'a' && str[i] <= 'z') ? str[i] - 32 : str[i];
    return (str);
}
