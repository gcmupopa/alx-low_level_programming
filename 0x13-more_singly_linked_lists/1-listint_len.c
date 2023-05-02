#include "lists.h"

/**
 * listint_len- returns number of of elems in linked list
 * @h: parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number_nodes = 0;
	const listint_t *ptr;

	ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		number_nodes += 1;
		ptr = ptr->next;
	}
	return (number_nodes);
}

