#include "main.h"
/**
 * binary_check - function that check if string 0 or 1
 * @b: pointer to astring of 0 or 1
 * Return: 0 or 1
 */
int binary_check(const char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	return (1);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number,
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL || !binary_check(b))
		return (0);
	while (b[i] != '\0')
	{
		result = result << 1;
		if (b[i] == '1')
			result |= 1;
		i++;
	}
	return (result);
}
