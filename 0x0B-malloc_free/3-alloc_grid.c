#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function returns a pointer to a two dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL if fail.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int a, b;

	p = malloc(height * sizeof(*p));
	if (p == NULL || width <= 0 || height <= 0)
		return (0);

	for (a = 0; a < height; a++)
	{
		p[a] = malloc(width * sizeof(**p));
		if (p[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(p[b]);
			}
			free(p);
			return (0);
		}
		
		for (b = 0; b < height; b++)
			p[a][b] = 0;
	}
	return (p);
}
