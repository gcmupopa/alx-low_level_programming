#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase excluding q and e
 * Return: This returns 0
 */

int main(void)
{
	char x = 'a';

	while
		(x <= 'z')
		{
		if ((x != 'q' && x != 'e') && x <= 'z')
			putchar(x);
		x++;
		}
	putchar('\n');
	return (0);
}
