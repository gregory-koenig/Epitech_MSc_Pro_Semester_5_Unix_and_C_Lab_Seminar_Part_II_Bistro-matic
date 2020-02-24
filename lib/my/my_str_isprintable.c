/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** Returns "1" if the string passed as parameter only contains printable
** characters and "0" otherwise
*/

void my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < ' ' || str[i] > '~')
            return (0);
    return (1);
}
