#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - 2D array of integers
 * @width: how wide
 * @height: how high
 * Return: On success, pointer to the matrix.
 * on error, NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = (int **) malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *) malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			free(matrix);
			for (j = 0; j <= i; j++)
				free(matrix[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
