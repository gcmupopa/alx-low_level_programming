#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _strlen(char *s);

/**
* string_nconcat- concatenates two strings.
* @s1: parameter
* @s2: parameter
* @n: parameter
* Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = _strlen(s1);
	unsigned int s2_length = _strlen(s2);
	unsigned int size = s1_length + s2_length + 1;
	char *s = calloc(size, sizeof(char));
	unsigned int i;

	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}

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
