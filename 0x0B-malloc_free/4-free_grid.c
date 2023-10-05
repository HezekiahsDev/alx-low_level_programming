#include "main.h"
#include <stdlib.h>
/**
  * free_grid - free mem alloced to grid
  * @grid: ptr to grid address
  * @height: array height
  *
  * Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	for (i = 0; i < height; i++)
	{
		free(grid[index]);
	}
	free(grid);
}
