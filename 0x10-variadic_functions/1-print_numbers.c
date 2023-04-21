#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints number.
 * @separator: delimiter
 * @n: number of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list countPtr;
	unsigned int i;

	if (n > 0)
	{
		va_start(countPtr, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(countPtr, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(countPtr);
	}
	printf("\n");
}
