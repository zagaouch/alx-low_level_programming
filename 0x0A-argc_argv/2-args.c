#include "main.h"

/**
 * main - show he program name
 * @argv: the arguments
 * @argc: the number if argumnet
 * Return: 0
 */
intmain(int argc, char *argv[])
{	
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
