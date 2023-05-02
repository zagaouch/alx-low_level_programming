#include "lists.h"

/**
 * sum_listint - give the sum of the integers in a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of integers in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
