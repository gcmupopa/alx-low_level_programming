#include <stdio.h>
#include "function_pointers.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

		if (f == 0)
		return (0);

	return (n);
}

/**
 * main- prints opcodes of main function
 * @argc: parameter
 * @argv: parameter
 * Return:0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Space used: %s number_of_bytes\n", argv[0]);
		return (1);
	}

	int number_of_bytes = atoi(argv[1]);

	unsigned char *pbyte = (unsigned char *)main;
	int counter;

	for (counter = 0; counter < number_of_bytes; counter++)
	{
		printf("%02X  ", *(pbyte + counter));
	}
	printf("\n");
	return (0);
}

