#include "main.h"
#include <stdio.h>

/**
 * is_prime_number()- function checks if input number is prime
 * @n: parameter
 *Return: a value
 */

int is_prime_number(int n)
{
	int i;

	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		i = i - 1;
		is_prime_number(n);
	}
}
