#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @*a : array list
 * @n : number of elements
 */
void print_array(int *a, int n)
{
	int i,j;

	for(i = 0; i < n; i++){
		printf(" %d",a[i]);
		for(j =0; j < n-1; j++)
			printf(",");
	}
	printf("\n");
}
