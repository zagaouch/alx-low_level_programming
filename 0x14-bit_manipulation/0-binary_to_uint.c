#include <string.h>
#include <stdio.h>
#include "main.h"
#include <math.h>
#include <stdlib.h>
/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 , or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, size;

	if (b == NULL)
		return (NULL);
	size = strlen(b);
	for(i = 0;i < size; i++)
	{
		if (b[i] != '0' && b[i] != '1'
				return (0);
		num += (b[i] - '0') * pow(2, size i - 1);
	}
	return (sum);
}
