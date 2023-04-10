#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	int i;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int sum = a * b;

	for (i = 2; i < argc; i++)
	{
		if (argc  > 1)
		{
			printf("%d\n", sum);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	return (0);
}
