#include "lists.h"

/**
 * free_listint_safe- free linked list
 * @h: parameter
 * Return: size of freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	listint_t *cnode, *tempoptr;

	cnode = *h;
	while (cnode != NULL)
	{
		tempoptr = cnode;
		cnode = cnode->next;
		free(tempoptr);
		counter++;

		if (cnode == *h)
		{
			*h = NULL;
			break;
		}
	}
	*head = NULL;
	return (counter);
}
