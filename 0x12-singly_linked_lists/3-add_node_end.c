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
	struct node *ptr, *temp;
	ptr = *head;
	temp = (struct node*)malloc(sizeof(struct node));

	temp->str = strdup(str);
	temp->next = NULL;

	while (*ptr.next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return(ptr);
}
