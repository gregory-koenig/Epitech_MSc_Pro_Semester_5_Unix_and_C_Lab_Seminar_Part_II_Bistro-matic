/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** Returns "1" if the string passed as parameter only contains digits and "0"
** otherwise
*/

void my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    return (1);
}
