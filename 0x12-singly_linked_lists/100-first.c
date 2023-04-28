#include <stdio.h>
#include <stdlib.h>

/**
 * turtle- automatically call fx before main
 * Return: nothing
 */

void __attribute__ ((constructor)) turtle()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
