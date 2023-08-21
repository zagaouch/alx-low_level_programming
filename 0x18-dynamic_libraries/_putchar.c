#include <unistd.h>
#include "main.h"
/**
 * _putchar - function to print char
 * @c : character
 * Return : 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
