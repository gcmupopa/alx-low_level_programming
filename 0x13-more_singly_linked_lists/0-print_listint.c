#include "lists.h"

/**
 * print_listint- prints all elements of the list
 * @h: parameter
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number_nodes = 0;
	const listint_t *ptr;

	ptr = h;

	if (ptr == NULL)
		return (1);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		number_nodes += 1;
		ptr = ptr->next;
	}
	return (number_nodes);
}
