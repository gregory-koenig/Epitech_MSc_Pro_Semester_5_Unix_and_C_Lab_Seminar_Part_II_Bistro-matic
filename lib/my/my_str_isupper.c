/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** Returns "1" if the string passed as parameter only contains uppercase
** alphabetical characters and "0" otherwise
*/

void my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
    return (1);
}
