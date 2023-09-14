#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_djb2 - implimentation of djb2 aldo
 * @str: The array
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash = 5381;
int c;

while ((c = *str++))
{
hash = ((hash << 5) + hash) + c;
}

return (hash);
}