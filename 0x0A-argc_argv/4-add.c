#include "main.h"

/**
 * main - calcul the summe of numbers
 * @argv: the numers as argumznt
 * @argc: the number of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res = 0, i;


	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			res = res + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
