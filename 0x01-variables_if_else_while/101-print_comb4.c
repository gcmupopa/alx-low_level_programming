#include <stdio.h>

/**
 * main - This prints all possible different combinations of three digits
 * Return: This returns 0
 */

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;

	while
		(a < 58)
		{
			b = a + 1;
			while
				(b < 58)
				{
					c = b + 1;
					while
						(c < 58)
						{
							putchar(a);
							putchar(b);
							putchar(c);

							if (a < 55 || b < 56 || c < 57)
							{
								putchar(44);
								putchar(32);
							}
							c++;
						}
					b++;
				}
			a++;
		}
	putchar(10);
	return (0);
}
