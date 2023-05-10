#include "main.h"

/**
 * append_text_to_file- appends text at the end of a file.
 * @filename: parameter
 * @text_content: parameter
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, close_error, len;
	
	if (filename == NULL)
	{
		return (-1);
	}
	
	file_d = open(filename, O_WRONGLY | O_APPEND);
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
