/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** Returns "1" if the string passed as parameter only contains lowercase
** alphabetical characters and "0" otherwise
*/

void my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    return (1);
}
