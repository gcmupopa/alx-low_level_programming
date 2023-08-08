#include "main.h"

/**
 * copyf()-copies the content of a file to another file
 * @so: source file
 * @dest: destination file
 * Return: nothing
 */

void copyf(const char *so, const char *dest)
{
	int n, fd0, fd1;
	char buffer[BUFFER];

	fd0 = open(so, O_RDONLY);
	if (fd0 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", so);
	}

	fd1 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", dest);
	}

	while ((n = read(fd0, buffer, BUFFER)) > 0)
	{
		if (write(fd1, buffer, n) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write %s\n", dest);
		}
	}

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", so);
	}

	if (close(fd0) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", so);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", dest);
	}
}

/**
 * main - check the code
 * @ac: parameter
 * @av: parameter
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac < 3)
	{
		return (-1);
	}

	copyf(av[1], av[2]);
	return (0);
}

