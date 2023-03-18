#include <stdio.h>
/**
 * main - prints the alphabet in lowercass.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
