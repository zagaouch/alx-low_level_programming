#include "lists.h"
#include <stdio.h>
/**
 * message - printf a message
 */
void __attribute__ ((constructor)) message(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
