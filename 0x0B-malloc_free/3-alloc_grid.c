#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate memory for a newly created grid
 * @width: array (grid) width
 * @height: array (grid) height
 * Return: return thr pointer to the memory address of the grid
 * or NULL if it does not exist
 */
int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **grid;

	/* confirm existence of grid */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		/* allocate memory for grid */
		grid = (int **) malloc(height * sizeof(int *));
		/* allocate memory for each pointer */
		/* and free if not pointer */
		if (!grid)
		{
			free(grid);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *) malloc(width * sizeof(int));
			if (!grid[i])
			{
				for (j = 0; j <= i; j++)
					free(grid[j]);
				free(grid);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				grid[a][b] = 0;
			}
		}
		return (grid);
	}
}
