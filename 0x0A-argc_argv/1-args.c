#include "main.h"

/**
 * main - show the numbers program
 * @argv: the arguments
 * @argc: the number if argumnet
 * Return: number of ergument
 */
int main(int argc, char *argv[])
{
	(void) argv;

	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
