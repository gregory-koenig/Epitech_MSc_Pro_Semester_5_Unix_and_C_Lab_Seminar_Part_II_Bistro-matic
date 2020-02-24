/*
** EPITECH PROJECT, 2019
** my_compute_square_root.c
** File description:
** CPool_Day05_2019
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    for (i; (i * i) < nb; i++);
    if ((i * i) == nb)
        return (i);
    else
        return (0);
}
