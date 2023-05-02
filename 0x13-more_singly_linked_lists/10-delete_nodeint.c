#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index
 * @head: parameter
 * @index: parameter
 * Return: 1 else 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dnode, *ptr;
	unsigned int counter;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		dnode = *head;
		*head = dnode->next;
		free(dnode);
		return (1);
	}

	ptr = *head;
	for (counter = 0; counter < index - 1 && ptr->next != NULL; counter++)
	{
		ptr = ptr->next;
	}

	if (ptr->next == NULL && counter < index - 1)
	{
		return (-1);
	}

	dnode = ptr->next;
	ptr->next = dnode->next;
	free(dnode);
	return (1);
}

