#include "main.h"
#include <stdlib.h>
/*
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: double pointer to grid
 * @height: the hieght of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height);
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
