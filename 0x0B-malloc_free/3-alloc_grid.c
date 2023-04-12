#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- returns a pointer to a 2 dim array of int
 * @width: parameter
 * @height: parameter
 * Return: a pointer else NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **algrid;
	int count1;
	int count2;

	if (height <= 0 || width <= 0)
		return (NULL);

	algrid = malloc(sizeof(int *) * height);

	if (algrid == NULL)
		return (NULL);

	for (count1 = 0; count1 < height; count1++)
	{
		algrid[count1] = (int *)malloc(sizeof(int) * width);
		if (algrid[count1] == NULL)
		{
			free(algrid);
			for (count2 = 0; count2 <= count1; count2++)
				free(algrid[count2]);
			return (NULL);
		}

	}

	for (count1 = 0; count1 < height; count1++)
	{
		for (count2 = 0; count2 < width; count2++)
		{
			algrid[count1][count2] = 0;
		}
	}
	return (algrid);
}
