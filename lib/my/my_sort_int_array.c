/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** Sorts an integer array in ascending order, given a pointer to the first
** element of the array and its size
*/

int check_sort(int *array, int size)
{
    for (int i = 1; i != size; i++) {
        if (array[i - 1] > array[i])
            return (84);
    }
    return (0);
}

void my_sort_int_array(int *array, int size)
{
    int temp;

    for (int i = 1; check_sort(array, size) == 84; i++) {
        i = (i >= size) ? 1 : i;
        if (array[i - 1] > array[i]) {
            temp = array[i - 1];
            array[i - 1] = array[i];
            array[i] = temp;
        }
    }
}
