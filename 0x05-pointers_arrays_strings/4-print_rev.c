#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @s : string
 */
void print_rev(char *s)
{
	int length = strlen(s);
 	int i;

	for (i = length - 1; i >= 0; i--)
	{
        printf("%c", s[i]);
	}
	printf("\n");
}

