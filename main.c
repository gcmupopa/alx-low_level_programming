#include "monty.h"
#include <unistd.h>
#include <stdio.h>

ssize_t getline(char **lineptr, size_t *n, FILE *stream);

int main(int argc, char *argv[])
{
	FILE *fp;
	stack_t *stack = NULL;
	char *lin = NULL;
	size_t len = 0;
	ssize_t read = 0;
	unsigned int linum = 1;
	char *token = NULL;
	char **tokens = malloc(32 * sizeof(char*));
	int numtok = 0;
	int i, j;
	instruction_t instructions[] = {{"push", push}, {"pall", pall}};

	if (tokens == NULL)
		return (1);
	if (argc != 2)
		exit(EXIT_FAILURE);

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&lin, &len, fp)) != -1)
	{
		lin[read - 1] = '\0';
		token = strtok(lin, " ");
		while (token != NULL && numtok < 32)
		{
			tokens[numtok++] = token;
			token = strtok(NULL, " ");
		}

		for (i = 0; i < 2; i++)
		{
			if (strcmp(tokens[0], instructions[i].opcode) == 0)
			{
				instructions[i].f(&stack, linum);
				break;
			}
		}

		if (i == 2)
		{
			exit(EXIT_FAILURE);
		}
		
		
		linum++;
	}
	for (j = 0; j < numtok; j++)
	{
		free(tokens[j]);
	}
	fclose(fp);
	free(lin);
	return (0);
}
