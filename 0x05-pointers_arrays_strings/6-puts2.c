#include <stdio.h>
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str : string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		printf("%c", str[i]);
	printf("\n");
}
