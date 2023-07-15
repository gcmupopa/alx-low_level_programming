#include "main.h"

/**
 * printerror()- prints error message
 * @Msg: error message to be printed
 * Return: nothing
 */

void printerror(char *Msg)
{
	printf("Error: %s\n", Msg);
}

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
		printerror("Cannat read source file");
		exit(98);
	}

	fd1 = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd1 == -1)
	{
		printerror("Cannot write to dest file");
		exit(99);
	}

	while ((n = read(fd0, buffer, BUFFER)) > 0)
	{
		if (write(fd1, buffer, n) != n)
		{
			printerror("Cannot write to file");
			exit(99);
		}
	}

	if (n == -1)
	{
		printerror("Cannot read file");
		exit(98);
	}

	if (close(fd0) == -1)
	{
		printerror("Cannot close file descriptor");
		exit(100);
	}

	if (close(fd1) == -1)
	{
		printerror("Cannot close file descriptor");
		exit(100);
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
	if (ac != 3)
	{
		return (-1);
	}

	copyf(av[1], av[2]);
	return (0);
}

