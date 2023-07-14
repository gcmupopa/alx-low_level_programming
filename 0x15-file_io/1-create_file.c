#include "main.h"

/**
 * create_file()- make a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to thefile
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filed, n;

	if (filename == NULL)
	{
		return (-1);
	}
	filed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
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
