#include "main.h"

/**
 * _strlen - measures length of a string
 * @s: parameter
 * Return: a value
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
