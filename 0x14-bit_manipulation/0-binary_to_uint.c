#include "main.h"

/**
 * binary_to_uint()- converts a binary number to unsigned integrr
 * @b: string of 0 and 1 chars
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, num = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			num = num << 1;
		}

		else if (b[i] == '1')
		{
			num = (num << 1) + 1;
		}

		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
