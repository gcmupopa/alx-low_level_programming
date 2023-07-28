#include "main.h"

/**
 * size_env()- computes size of environ
 * Return: size of environ
 */
extern char **environ;
int size_env()
{
	int size = 0;
	while (environ[size] != NULL)
	{
		size++;
	}
	return (size);
}
