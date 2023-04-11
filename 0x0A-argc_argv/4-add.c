#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints sum numbers
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
				return (1);
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
