#include "lists.h"

/**
 * get_nodeint_at_index- returns nth node of linked list
 * @head: parameter
 * @index: parameter
 * Return: nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cnode;
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
