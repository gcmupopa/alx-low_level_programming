#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the node at index
 * @head: parameter
 * @index: parameter
 * Return: 1 else 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dnode, *ptr;
	unsigned int counter;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		dnode = *head;
		*head = dnode->next;
		if (*head != NULL)
			(*head)->prev = NULL;

		free(dnode);
		return (1);
	}

	ptr = *head;
	for (counter = 0; counter < index - 1 && ptr != NULL; counter++)
	{
		ptr = ptr->next;
	}

	if (ptr == NULL)
	{
		return (-1);
	}

	dnode = ptr;
	ptr->prev->next = ptr->next;

	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;

	free(dnode);
	return (1);
}

