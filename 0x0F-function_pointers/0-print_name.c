#include <stdlib.h>
/**
 * print_name - function to print a name
 * @name: the name
 * @f:function to execute
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
