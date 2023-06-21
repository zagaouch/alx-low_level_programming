#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - printf a name
 * @f: Function pointers
 * @name: the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
