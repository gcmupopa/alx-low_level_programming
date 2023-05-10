#include "main.h"

/**
 * create_file- creates a file
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 else 0
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, close_error, len;

	if (filename == NULL)
	{
		return (-1);
	}

	file_d = open(filename, O_WRONGLY | O_CREAT | O_EXCL, 600);
	if (file_d == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write(file_d, text_content, len);
	}

	close_error = close(file_d);
	if (close_error == -1)
	{
		return (-1);
	}

	return (1);
}
