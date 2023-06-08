#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number
 * Return: -1 if n is negativ or 1 if equal a 0 or the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
