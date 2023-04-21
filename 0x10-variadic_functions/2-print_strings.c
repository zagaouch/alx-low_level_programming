#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: delimiter
 * @n: number of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list countPtr;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(countPtr, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(countPtr, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(countPtr);
	}
	printf("\n");
}
