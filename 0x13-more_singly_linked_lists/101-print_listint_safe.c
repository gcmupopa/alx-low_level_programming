#include "lists.h"

/**
 * print_listint_safe- prints linked list
 * @head: parameter
 * Return: number of nodes in linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr;
	int number_nodes = 0;

	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		printf("[%p] %d\n", (void *)ptr->next, ptr->n);
		number_nodes++;
	}
	return (number_nodes);
}
