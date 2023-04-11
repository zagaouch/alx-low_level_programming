#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplies two number
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
