#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
