#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of bytes from s2 to concatenate
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s2);

	if (n >= l2)
		n = l2;
	c = (char *)malloc((l1 + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
		c[i + j] = s2[j];
	c[i + j] = '\0';
	return (c);
}
