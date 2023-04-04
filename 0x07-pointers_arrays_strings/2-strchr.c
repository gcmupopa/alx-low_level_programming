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
	int value = 0;

	while (s[value])
	{
		value++;
	}

	for (i = 0; i <= value; i++)
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
	}
	return ('\0');
}
