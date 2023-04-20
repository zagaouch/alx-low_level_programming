#include <stddef.h>
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing function that we need to execute
 * Return: the index where integer's found, or else -1 
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int st;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (st = 0; st < size; st++)
			{
				if (cmp(array[st]))
					return (st);
			}
		}
	}

	return (-1);
}
