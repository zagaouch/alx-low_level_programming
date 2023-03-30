#include "main.h"
/*
 * _strcat - function that concatenates two strings
 * @src : string source
 * @dest :  string desination
 */
char *_strcat(char *dest, char *src)
{
	while(*dest != '\0')
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
