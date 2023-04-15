#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- multiplies two positive numbers
 * @argc: parameter
 * @argv: parameter
 * Return: value
 */

int main(int argc, char *argv[])
{
	unsigned long long int num1 = atoi(argv[1]);
	unsigned long long int num2 = atoi(argv[2]);
	unsigned long long mul = num1 * num2;

	_putchar(mul);
	_putchar('\n');

	return (0);
}
