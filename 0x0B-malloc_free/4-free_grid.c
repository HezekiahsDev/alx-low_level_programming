#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free grid
  * @grid: pointer to grid address
  * @height: array (grid) height
  *
  * Return: void.
  */
void free_grid(int **grid, int height)
{
	int index;

	index = 0;
	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
