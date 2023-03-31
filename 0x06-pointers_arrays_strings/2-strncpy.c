#include "main.h"
/*
 * _strcat - concatenate strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int ld = 0;
	
	while (*(dest + ld) != '\0')
		ld++;
	
	while (*src)
	{
		*(dest + ld) = *src;
		ld++;
		src++;
	}
	*(dest + ld) = '\0';
	return (dest);
}
