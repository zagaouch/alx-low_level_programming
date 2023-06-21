#include <stdio.h>
/**
 * print_name - printf a name
 * @name: the name
 */

void print_name(char *name, void (*f)(char *))
{
	printf("%s\n", name);
}
