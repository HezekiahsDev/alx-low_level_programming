#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate memory for a newly created grid
 * @width: grid width
 * @height: grid height
 * Return: ptr to mem address of grid
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
		/*grid malloc*/
		grid = (int **) malloc(height * sizeof(int *));
		/* ptrs malloc*/
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

		a = 0;
		while (a < height)
		{
			b = 0;
			while (b < width)
			{
				grid[a][b] = 0;
				b++
			}
			a++;
		}
		return (grid);
	}
}
