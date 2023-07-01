#include "lists.h"
/**
 * print_list - unction that prints all the elements of a list_t list.
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	 while (current != NULL)
	 {
		 if (current->str == NULL)
		 {
			 printf("[0] (nil)\n");
		 }
		 else
		 {
		 printf("[%d] %s\n", current->len, current->str);
		 }
		 count+;
		 current = current->next;
	 }
	return (count);
}
