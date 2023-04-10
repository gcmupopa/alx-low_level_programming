#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints program name followed by new line
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
