#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nods;

	while(h != NULL)
	{
		printf("%d", h->n);
		nods ++;
		h = h->next;
	}
	return (nods);
}
