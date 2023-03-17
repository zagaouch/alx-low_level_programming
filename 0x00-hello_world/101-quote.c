#include <unistd.h>
/**
 * main - This program prints a message to the standard error.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, sizeof(str) - 1);
	return (1);
}
