#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list- frress a list
 * @head: parameter
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *Bee;

	while (head != NULL)
	{
		Bee = head;
		head = head->next;
		free(Bee);
	}
}
