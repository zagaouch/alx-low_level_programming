#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination  string
 * @src: source string
 * @n: src size
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld, ls;

	ld = 0;
	ls = 0;

	while (*(dest + ld))
		ld++;

	while (*(src + ls) && ls < n)
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}
	*(dest + ld) = '\0';
	return (dest);
}
