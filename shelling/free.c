#include "main.h"

/**
 * free_t()- free dynamically allocated command line arguments
 * @tokens: tokens to be freed
 * Return: nothing
 */

void free_t(char **tokens)
{
	int i;

	if (tokens == NULL)
	{
		return;
	}

	for (i = 0; tokens[i] != NULL; i++)
	{
		free(tokens[i]);
	}
	free(tokens);
}
