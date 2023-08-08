#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid function
 * @grid: the grid to free
 * @height: the height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
