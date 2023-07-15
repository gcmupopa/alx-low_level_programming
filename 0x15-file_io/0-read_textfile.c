#include "main.h"

/**
 * read_textfile()- read a text file and prints to posix standard output
 * @filename: file to be read
 * @letters: number of letters to be read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t n, bwrot;
	char *buffer = (char *)malloc(char * (letters + 1));

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	filed = open(filename, O_RDONLY);
	if (filed == -1)
	{
		return (0);
	}

	n = read(filed, buffer, letters);
	if (n == -1)
	{
		close(filed);
		return (0);
	}
	
	while (n > 0)
	{
		bwrot = write(STDOUT_FILENO, buffer, n);
		if (bwrot != n || bwrot == -1)
		{
			free(buffer);
			close(filed);
			return (0);
		}
		n -= bwrot;
	}
	free(buffer);
	close(filed);
	return (bwrot);
}
