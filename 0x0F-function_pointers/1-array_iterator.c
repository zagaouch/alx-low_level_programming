#include <stddef.h>
/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t st;

	if (array != NULL && action != NULL)
		for (st = 0; st < size; st++)
			action(*(array + st));
}
