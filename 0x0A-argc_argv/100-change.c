#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints minimum number of coins for change
 * @argc: parameter
 * @argv: parameter
 * Return: a value
 */

int main(int argc, char *argv[])
{
	int number, sum, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	sum = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}


	for (i = 0; i < 5 && number >= 0; i++)
	{
		for (; number >= coins[i]; sum++)
		{
			number -= coins[i];
		}
	}
	printf("%d\n", sum);
	return (0);
}
