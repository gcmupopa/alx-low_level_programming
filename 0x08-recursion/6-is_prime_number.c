#include "main.h"
#include <stdio.h>

int real_prime(int n, int i);

/**
 * is_prime_number()- function checks if input number is prime
 * @n: parameter
 *Return: a value
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}


/**
 * real_prime()- checks if number is prime recursive
 * @n: parameter
 * @i: parameter
 * Return: 1 if n is prime, else 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
