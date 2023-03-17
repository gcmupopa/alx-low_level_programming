#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase
 * Return: This returns 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
