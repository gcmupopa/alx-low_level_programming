#include <stdio.h>

/**
 * main - This prints all the numbers of base 16 in lowercase
 * Return: This returns 0
 */

int main(void)
{
	int x = 48;
	char y = 'a';

	while
		(x <= 57)
		{
			putchar(x);
			x++;
		}
	while
		(y <= 'f')
		{
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}
