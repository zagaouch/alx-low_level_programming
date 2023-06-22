#include "variadic_functions.h"
/**
 * print_all -  function that prints anything.
 * @format: format of arg
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;
	int argCount = 0;

	while ((c = format[argCount]) != '\0')
	{
		if (argCount >= 4)
			break;

		if (c == 'c')
		{
			i = va_arg(args, int);
			printf("%c", i);
		}
		else if (c == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (c == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}
		else if (c == 's')
		{
			s = va_arg(args, char*);

			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}

	argCount++;
	}

	va_end(args);
	printf("\n");
}
