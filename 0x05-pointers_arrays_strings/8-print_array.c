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

	for(i = 1; i < n-1; i++){
		printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
	}
	printf("\n");
}
