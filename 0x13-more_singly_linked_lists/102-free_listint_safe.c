#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to the head node of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *tmp;
	size_t count = 0;

	while (current)
	{
		tmp = current->next;
		free(current);
		count++;
		if (tmp >= current)
		{
			*h = NULL;
			break;
		}
		current = tmp;
	}
	return (count);
}
