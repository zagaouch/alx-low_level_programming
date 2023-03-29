#include "main.h"

/**
  * _strlen - Returns the length of string
  * @s: string
  * Return: length string
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
