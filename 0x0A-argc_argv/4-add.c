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
	unsigned int g;
	char *z;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			z = argv[i];

		for (g = 0; g < strlen(z); g++)
		{
			if (z[g] < 48 || z[g] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(z);
		z++;
	}
	printf("%d\n", sum);
}
else
{
	printf("0\n");
}
return (0);
}
