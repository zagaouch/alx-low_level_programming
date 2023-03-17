#include <unistd.h>
/*
 * commnet
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, sizeof(str)-1);
	return (1);
}
