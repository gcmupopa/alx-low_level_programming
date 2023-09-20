#include "main.h"

char **getok(void)
{
	char *lin = NULL;
	char **args = NULL;
	ssize_t num_read = 0;
	size_t lin_size = 0, len = 0;

	num_read = getline(&lin, &lin_size, stdin);
	if (_strcmp(lin, "exit\n") == 0 || num_read == -1)
	{
		free(lin);
		exit(0);
	}
	
	len = _strlen(lin);
	if (lin[len - 1] == '\n')
	{
		lin[num_read - 1] = '\0';
	}

	args = lintok(lin, num_read);
	free(lin);
	
	if (_strcmp(args[0], "exit") == 0 || args[0] == NULL)
	{
		exit(0);
	}
	return (args);
}
