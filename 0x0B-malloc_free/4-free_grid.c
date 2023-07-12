#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: 2D grid
 * @height: height dimension of the grid
 *
 * Description: frees the memory allocated for the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Free memory for each row in the grid */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory for the grid itself */
	free(grid);
}
