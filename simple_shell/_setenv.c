#include  "main.h"

/**
 * set_var()- initialise new env var or modify existing one
 * @var: variable to be initialised
 * @val: value to be given to env var
 * Return: nothing
 */
extern char **environ;
void set_var(char *var, char *val)
{
	char *nuva;
	char **nuenv;
	int i;

	if (val == NULL || var == NULL)
	{
		perror("setenv: invalid argument");
		exit(1);
	}

	nuva = malloc(_strlen(var) + _strlen(val) + 2);
	if (nuva == NULL)
	{
		perror("setenv: Failed to allocate memory");
		exit(1);
	}

	_strcpy(nuva, var);
	_strcat(nuva, "=");
	_strcat(nuva, val);

	nuenv = malloc(sizeof(char *) * (size_env()+ 2));
	if (nuenv == NULL)
	{
		perror("setenv: Failed to allocate memory");
		free(nuva);
		exit(1);
	}

	for (i = 0; environ[i] != NULL; i++)
	{
		nuenv[i] = environ[i];
	}

	nuenv[size_env()] = nuva;
	nuenv[size_env() + 1] = NULL;
	environ = nuenv;
}

