#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @*a : array list
 * @n : number of elements
 */
void print_array(int *a, int n)
{
	int i;

	for(i = 0; i <  n; i++){
		printf(" %d,",a[i]);
	}
	printf("\n");
}
