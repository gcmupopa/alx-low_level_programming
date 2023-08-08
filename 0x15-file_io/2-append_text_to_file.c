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

/**
 * append_text_to_file()- appends text at the end of a file
 * @filename: name of file to be appended
 * @text_content: null terminated string to add at end of file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed, n;

	if (filename == NULL)
	{
		return (-1);
	}

	filed = open(filename, O_RDONLY | O_APPEND);
	if (filed == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		n = write(filed, text_content, _strlen(text_content));
		if (n == -1)
		{
			close(filed);
			return (-1);
		}
	}
	close(filed);
	return (1);
}
