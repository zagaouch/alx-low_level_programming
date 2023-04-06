#include "main.h"
/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number to calculate the square root of
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	return (cal_sqrt(n, 1));
}
/**
 * cal_sqrt - an other function to calcule square root
 * @n: the number to calculate the square root of
 * @i: the possible square root
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int cal_sqrt(int n, int i)
{
	if (i * i = n)
		return (i);
	if(i * i > n)
		return (-1);
	return (cal_sqrt(n, i + 1));
}
