#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints the last digit of a randomly generated number
 * Return: 0 upon successful completion
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	m = n % 10;
	if (m > 5)
	printf("%d and is greater than 5\n", m);
	else if (m == 0)
	printf("%d and is 0\n", m);
	else
	printf("%d and is less than 6 and not 0\n", m);
	return (0);
}
