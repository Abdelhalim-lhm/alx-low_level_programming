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
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid == 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
