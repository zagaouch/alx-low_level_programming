#include "main.h"

/**
 * main - show he program name
 * @argv: the arguments
 * @argc: the number if argumnet
 */
void main(int argc __attribute__((unused)), char *argv[])
{	
	if (argc > 0)
		printf("%s\n", argv[0]);
}
