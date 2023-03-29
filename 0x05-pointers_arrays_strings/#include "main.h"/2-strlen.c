#include "main.h"

/**
  * _strlen - Returns the length of string
  * @s: String to count
  * Return: the length of string
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
