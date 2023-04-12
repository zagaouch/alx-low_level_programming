#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * Return: NULL or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len;
	char *concat;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	len = strlen(s1);
	len = len + strlen(s2);
	concat = (char *)malloc((len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	concat = strcat(s1,s2);
	return (concat);
}
