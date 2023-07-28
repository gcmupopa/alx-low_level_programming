#include "main.h"

/**
 * _strdup()- creates string duplicate
 * @s: string to be duplicated
 * Return: a pointer of the duplicaed string
 */

char *_strdup(char *s)
{
	int i;
	char *duplicate;

	duplicate = malloc(sizeof(char) * (_strlen(s) + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		duplicate[i] = s[i];
	}
	duplicate[i] = '\0';
	return (duplicate);
}

