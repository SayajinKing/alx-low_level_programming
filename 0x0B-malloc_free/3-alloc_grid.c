#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2D grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2D grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each column in every row */
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			/* Free previously allocated memory if allocation fails */
			for (y = 0; y < x; y++)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
	}

	/* Initialize all elements of the grid to 0 */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grid[x][y] = 0;
	}

	return (grid);
}
