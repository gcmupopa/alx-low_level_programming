#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * n: numbers of characters to be compared
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strncmp(char *s1, char *s2, size_t n)
{
	size_t i;

	for(i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else if (s2[i] == '\0' || s1[i] == '\0')
			return (0);
	}
	return (0);
}
