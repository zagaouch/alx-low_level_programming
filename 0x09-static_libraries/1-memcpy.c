#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to fill
 * Return: memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
