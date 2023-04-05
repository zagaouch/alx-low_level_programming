#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int sum_1 = 0;
	int sum_2 = 0;
	int row;
	int i = 0;

	for (row = 0; row < size; row++)
	{
		sum_1 += a[i];
		i++;
	}

	for (row = 1; row <= size; row++)
	{
		sum_2 += a[i];
		i--;
	}

	printf("%d, %d\n", sum_1, sum_2);

}
