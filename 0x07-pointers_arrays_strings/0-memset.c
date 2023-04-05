#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
