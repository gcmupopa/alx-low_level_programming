#include "main.h"

/**
 * factorial()- function returns factorial of a number
 * @n: parameter
 * Return: a value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
