#include "lists.h"

/**
 * insert_dnodeint_at_index- inserts new node at given position
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *cnode;
	unsigned int counter;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	cnode = *h;

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = *h;

		if (*h != NULL)
			(*h)->prev = newnode;

		*h = newnode;
		return (newnode);
	}

	for (counter = 0; counter < idx - 1 && cnode->next != NULL; counter++)
	{
		cnode = cnode->next;
	}

	if (cnode == NULL || counter < idx - 1)
	{
		free(newnode);
		return (NULL);
	}

	newnode->prev = cnode;
	newnode->next = cnode->next;

	if (cnode->next != NULL)
		cnode->next->prev = newnode;

	cnode->next = newnode;
	return (newnode);
}
