#include <stdio.h>

/**
* main - This prints all possible combinations of two two-digit numbers
* Return: This returns 0
*/

int main(void)
{
	int a = 0;
	int b;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(32);
	return (0);
}
