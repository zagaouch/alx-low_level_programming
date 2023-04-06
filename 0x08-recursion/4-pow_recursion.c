#include "main.h"
/**
 * _pow_recursion - calcul the value of x raised to the power of y
 * @x: the number
 * @y: the power
 *
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y ==0)
		return (1);
	else
	{
		return(_pow_recursion(x) * x);
		y--;
	}
