#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character t find in the string
 *
 * Return: memory area
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
