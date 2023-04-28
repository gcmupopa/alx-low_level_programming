#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end- adds new node at end of list
 * @head:parameter
 * @str: parameter
 * Return: ptr to address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s_pointer;
	list_t *lastn;
	list_t *ptr;
	int counter = 0;

	if (str != NULL && head != NULL)
	{
		s_pointer = (char *)str;
		while (*s_pointer)
			counter++;

		lastn = malloc(sizeof(list_t));
		if (lastn == NULL)
			return (NULL);

		lastn->str = strdup(str);
		lastn->len = counter;
		lastn->next = NULL;

		if (*head != NULL)
		{
			ptr = *head;
			while (ptr->next)
				ptr = ptr->next;

			ptr->next = lastn;
			return (ptr);
		}
		else
		{
			*head = lastn;
			return (*head);
		}
	}
	return (0);
}
