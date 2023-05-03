#include "lists.h"

/**
 * insert_nodeint_at_index- inserts new node at given position
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *cnode;
	unsigned int counter;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	cnode = *head;

	for (counter = 0; counter < idx - 1 && cnode->next != NULL; counter++)
	{
		cnode = cnode->next;
	}

	if (cnode->next == NULL && counter < idx - 1)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = cnode->next;
	cnode->next = newnode;

	if (newnode == NULL)
	{
		return (NULL);
	}
	return (newnode);
}
