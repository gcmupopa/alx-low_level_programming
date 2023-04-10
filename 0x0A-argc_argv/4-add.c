#include <stdio.h>
#include <stdlib.h>

/**
 * main- adds positive numbers
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i <= argc; i++)
	{
		if (atoi(argv[i]) > 1)
		{
			sum = sum + atoi(argv[i]);
			printf("%d\n", sum);
		}
		else if (atoi(argv[i]) > 0 || atoi(argv[i]) < 9)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", 0);
		}
	}
		return (0);
}
