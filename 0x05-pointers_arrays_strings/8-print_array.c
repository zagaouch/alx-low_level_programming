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
	int size;

	size = sizeof(a)-1;
	for(i = 0; i <  size; i++){
		printf("%d ,",a[i]);
	}
	printf("\n");
}
