#include "main.h"
/**
 * check_prime - checks if a number is a prime number
 * @n: the number to check
 * @i: the current divisor to check
 *Return: 1 if n is prime and 0 if else
 */

int check_prime(int n, int i)
{
	if (n % i == 0 || n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
