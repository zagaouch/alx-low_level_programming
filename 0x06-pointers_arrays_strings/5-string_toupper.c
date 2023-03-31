#include "main.h"
/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 * @str: Pointer to a string.
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
