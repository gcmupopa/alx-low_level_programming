#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase, and then in uppercase.
 * Return: This returns 0
 */

int main(void)
{
	char x = 'a';
	char y = 'y';

	while
		(x <= 'z')
		{
			putchar(x);
			x++;
		}
	while
		(y <= 'Z')
		{
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}

