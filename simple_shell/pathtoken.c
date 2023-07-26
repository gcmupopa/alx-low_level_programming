#include "main.h"

/**
 * tokenise()- splits commands line arguments
 * @line: pointer to the array of command line arguments
 * @num_read: number of characters read from the comand line
 * Return: a pointer to the arrays of strings splitted
 */

char **pathtok(char *path)
{
	char *pathcopy = NULL, *dir = NULL;
	int i, num_tok = 0;
	char **tokens;


	pathcopy = _strdup(path);
	dir = strtok(pathcopy, ":");
	while (dir != NULL)
	{
		num_tok++;
		dir = strtok(NULL, ":");
	}
	

	tokens = malloc(sizeof(char *) * (num_tok + 1));
	if (tokens == NULL)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}

	pathcopy = _strdup(path);
	dir = strtok(pathcopy, ":");
	for (i = 0; i < num_tok; i++)
	{
		tokens[i] = _strdup(dir);
		dir = strtok(NULL, ":");
	}

	tokens[num_tok] = NULL;
	free(pathcopy);
	return (tokens);
}
	
