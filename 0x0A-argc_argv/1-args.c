#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the number of arguments passed
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
