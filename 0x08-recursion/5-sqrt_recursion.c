#include "main.h"
/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: the number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	prime(n, n);
}
/**
 * prime - helper function
 * @n: the number
 * @i: intiger
 * Return: 0 or 1
 */
int prime(int n, int i)
{
	if (n % i == 0)
		return (1);
	prime(n, i - 1);
	return (0);
}
