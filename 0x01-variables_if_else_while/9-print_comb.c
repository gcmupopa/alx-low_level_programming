#include <stdio.h>

/**
 * main - This prints all possible combinations of single-digit numbers
 * Return: This returns 0
 */

int main(void)
{
	int x = 48;

	while
		(x <= 57)
		{
			putchar(x);
			if (x < 57)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
		}
	putchar('\n');
	return (0);
}
