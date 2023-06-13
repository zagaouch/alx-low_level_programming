#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: a string or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		concat = strdup(s2);
		return (concat);
	}
	if (s2 == NULL)
	{
		concat = strdup(s1);
		return (concat);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
