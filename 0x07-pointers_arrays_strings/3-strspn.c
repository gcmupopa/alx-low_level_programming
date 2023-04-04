#include "main.h"

/**
 * _strspn()- function that gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, value;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		value = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				value = 1;
			}
		}
		if (value == 0)
		{
			return (count);
		}
	}
	return (0);
}
