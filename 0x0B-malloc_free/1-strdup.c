#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory
 * @str: string given as a parameter
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	int len;
	char *new_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	strcpy(new_str, str);

	return (new_str);
}
