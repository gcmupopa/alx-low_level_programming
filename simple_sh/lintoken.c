#include "main.h"

/**
 * tokenise()- splits commands line arguments
 * @line: pointer to the array of command line arguments
 * @num_read: number of characters read from the comand line
 * Return: a pointer to the arrays of strings splitted
 */

char **lintok(char *lin, int num_read)
{
	char *tok = NULL, *lncopy = NULL, *lincopy = NULL, *delim = " \t\r\n)(";int i, num_tok = 0;
	char **tokens = NULL;


	if (num_read == -1 || lin == NULL)
	{
		exit(1);
	}

	lncopy = _strdup(lin);
	if (lncopy == NULL)
	{
		perror("Strdup failed");
		exit(1);
	}

	tok = strtok(lncopy, delim);
	while (tok != NULL && *tok != '\0')
	{
		num_tok++;
		tok = strtok(NULL, delim);
	}
	
	

	tokens = malloc(sizeof(char *) * (num_tok + 1));
	if (tokens == NULL)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}

	lincopy = _strdup(lin);
	if (lincopy == NULL)
	{
		exit(1);
	}
	tok = strtok(lincopy, delim);
	for (i = 0; i < num_tok; i++)
	{
		tokens[i] = _strdup(tok);
		tok = strtok(NULL, delim);
	}

	tokens[num_tok] = NULL;
	free(lncopy);
	free(lincopy);

	return (tokens);
}
	
