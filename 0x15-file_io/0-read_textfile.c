#include "main.h"

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: parameter
 * @letters: parameter
 * Return: number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t *buffer, read_size, write_size;

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	read_size = read(0, buffer, sizeof(buffer));

	if (read_size == 0)
	{
		return (-1);
	}

	write_size = write(1, buffer, read_size);
	if (write_size != read_size)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_size);
}
