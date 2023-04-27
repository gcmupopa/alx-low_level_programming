#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list- frress a list
 * @head: parameter
 * Return: nothing
 */

void free_list(list_t *head)
{
	struct node *Bee = (struct node*)malloc(sizeof(struct node));
	head = Bee;
	free(Bee);
}
