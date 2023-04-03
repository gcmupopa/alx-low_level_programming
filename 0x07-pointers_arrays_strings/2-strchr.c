#include "main.h"

/**
 * _strchr()- Resetting a value
 * @s: parameter
 * @c: parameter
 * Return: a value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (s);
	}
	return (s);
}
