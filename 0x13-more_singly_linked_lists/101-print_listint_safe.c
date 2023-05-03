#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				count+++;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
	}
	return (count);
}
