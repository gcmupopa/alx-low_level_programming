#include <stdio.h>

/**
 * main - This prints output to standard error
 * Return: This returns 1
 */

int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
