#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: the number of command line arguments
 * @argv: an array of strings representing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for(i=0; i < arg; i++)
		printf("%s\n", argv[i]);
	printf("\n");
	return (0);
}
