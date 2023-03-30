#include "main.h"
/*
 * _strcat - function that concatenates two strings
 * @src : string source
 * @dest :  string desination
 * return : dest
 */
char *_strcat(char *dest, char *src)
{
	int ls,ld;

	ld = 0;
	ls = 0; 

	while(*(dest + ld))
		ld++;
	
	while(*(src + ls) && ld < 97)
	{
		*(dest + ld) = *(src + ls);
		ld++;
		ls++;
	}
	*(dest + ld) = '\0';
	return (dest);
}
