#include "lists.h"

/**
 * get_dnodeint_at_index- returns nth node of linked list
 * @head: parameter
 * @index: parameter
 * Return: nth node of linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cnode;
	unsigned int counter = 0;

	cnode = head;

	while (cnode != NULL && counter < index)
	{
		cnode = cnode->next;
		counter++;
	}

	if (cnode == NULL)
	{
		return (NULL);
	}

	return (cnode);
}
