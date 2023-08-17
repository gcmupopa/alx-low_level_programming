#include "lists.h"

/**
 * dlistint_len()- returns number of elems in a dlinked list
 * @h: parameter
 * Return: number of elems in dlinked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numbernodes = 0;
	const dlistint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr != NULL)
	{
		numbernodes += 1;
		ptr = ptr->next;
	}
	return (numbernodes);
}
