#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returs a pointer to a 2 dimensional array of integers
 * @width: first dimensional integer
 * @height: second dimensional integer
 * Return: NULL or failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (m = 0; m < i; m++)
			{
			free(grid[m]);
			}
		free(grid);
	return (NULL);
		}
	for (m = 0; m < width; m++)
	{
		grid[i][m] = 0;
	}
	}
	return (grid);
}
