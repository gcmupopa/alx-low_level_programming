#include "main.h"

/**
 * _memset()- Resetting a value
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
