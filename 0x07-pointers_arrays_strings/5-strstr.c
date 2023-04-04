#include "main.h"

/**
 * _strstr()- function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: pointer to the beginning of the located substring,
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == needle[j])
				return (haystack);
		}
	}
	return (haystack);
}

