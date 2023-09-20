#include  "main.h"

/**
 * my_getvar()- initialise new env var or modify existing one
 * @name: variable to be get
 * 
 * Return: pointer to a character array
 */

char *my_getvar(char *name)
{
	extern char **environ;
	char **nuenv = environ;
	size_t namlen = _strlen(name);
	

	while (*nuenv != NULL)
	{
		if (_strncmp(name, *nuenv, namlen - 1) == 0 && (*nuenv)[namlen] == '=')
		{
			return (&((*nuenv)[namlen + 1]));
		}
		nuenv++;
	}
	return (NULL);
}
