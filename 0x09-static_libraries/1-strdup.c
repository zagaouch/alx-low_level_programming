#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string given as a parameter
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	int len;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	strcpy(dup_str, str);
	return (dup_str);
}
