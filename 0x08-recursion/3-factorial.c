#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to calcu the factorial
 *
 * Return: factorial number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return(factorial(n - 1) * n);
}
