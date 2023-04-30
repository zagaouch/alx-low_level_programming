#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: a linked list
 * Return: the number of elemnts
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	Return (size);
}
