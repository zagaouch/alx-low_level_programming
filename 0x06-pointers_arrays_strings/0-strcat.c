#include "main.h"
/*
 * _strcat - function that concatenates two strings
 * @src : string source
 * @dest :  string desination
 * return : 0
 */
char *_strcat(char *dest, char *src)
{
	int i,j;

	i = 0;
	j = 0; 

	while(*(dest + i))
		i++;
	
	while(*(src + j) && i < 97)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
