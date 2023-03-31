#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int ls = 0;
	int ld = 0;


	while (*(dest + ld))
		ld++;
	while (*(src + ls))
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}
	*(dest + ld) = '\0;
	return (dest);
}
