#include "main.h"
/*
 * _strcat - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int ld,ls;
	
	ld = 0;
	ls = 0;

	while (*(dest + ld) != '\0')
		ld++;
	while (*(src + ls))
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}
	*(dest + ld) = '\0';
	return (dest);
}
