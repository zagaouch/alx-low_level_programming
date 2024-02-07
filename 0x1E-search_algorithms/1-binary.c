#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array : array list
 * @size : the size of array
 * @value : the value to search
 * Return: array or if array is NULL, your function must return -1
*/

int binary_search(int *array, size_t size, int value)
{
size_t i, left = 0, right = size - 1;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");

for (i = left; i < right; i++)
printf("%d, ", array[i]);

printf("%d\n", array[i]);

i = left + (right - left) / 2;

if (array[i] == value)
}
