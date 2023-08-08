#include "main.h"
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: 0 on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
