#include <stdio.h>
/**
  * _strcpy -  copies the string pointed to other streing
  * @dest: string destination
  * @src: string source
  * Return: p
  */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}
