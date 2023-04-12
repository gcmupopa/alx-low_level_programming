#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *free_grid-frees a 2 dimensional grid
 * @grid: parameter
 * @height: parameter
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
		free(grid[counter]);

	free(grid);
}
