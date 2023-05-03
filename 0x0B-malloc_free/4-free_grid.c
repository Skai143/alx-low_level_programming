#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: double pointer to grid
 * @height: the hieght of the grid
 * Description: frees memory of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
