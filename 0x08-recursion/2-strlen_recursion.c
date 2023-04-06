#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to show the length
 */

int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		lenght++;
		_strlen_recursion(s + 1);
	}
	return (lenght);
}
