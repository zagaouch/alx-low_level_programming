#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array : array list
 * @size : the size of array
 * @value : the value to search
 * Return: array or if array is NULL, your function must return -1
*/
int linear_search(int *array, size_t size, int value){
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}