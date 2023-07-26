#include  "main.h"

/**
 * uset_var()- remove env var
 * @var: variable to be removed
 * Return: nothing
 */
extern char **environ;
void uset_var(char *var)
{
	char **nuenv;
	int i, j = 0;

	if (var == NULL)
	{
		perror("unsetenv: invalid argument");
		exit(1);
	}

	

	nuenv = malloc(sizeof(char *) * (size_env()));
	if (nuenv == NULL)
	{
		perror("unsetenv: Failed to allocate memory");;
		exit(1);
	}

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(var, environ[i], _strlen(var)) != 0 || environ[i][_strlen(var)] != '=')
		{
			nuenv[j] = environ[i];
			j++;
		}
		
		else
		{
			free(environ[i]);
		}
	}
	nuenv[j] = NULL;
}
