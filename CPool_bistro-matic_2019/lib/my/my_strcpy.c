/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** CPool_Day06_2019
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
