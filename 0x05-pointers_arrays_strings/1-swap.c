#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers.
 * @a : parameter number 1
 * @b : parameter number 2
 * @temp : temporair variabl
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = *a;
}
