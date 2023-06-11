#include "main.h"

/**
 * main - calcul the multipl of numbers
 * @argv: the numers as argumznt
 * @argc: the number of arg
 * Return: the mult
 */
int main(int argc, char *argv[])
{
	int res, n, m;

	if ( argc != 3)
		printf("error\n");
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);

		res = n * m;
		printf("Multiplication result: %d\n", res);
	}
	return (0);
}
