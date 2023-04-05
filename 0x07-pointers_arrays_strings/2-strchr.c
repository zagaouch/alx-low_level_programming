#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character t find in the string
 *
 * Return: memory area
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		else
			return (NULL);
		i++;
	}
	return (&s[i]);
}
