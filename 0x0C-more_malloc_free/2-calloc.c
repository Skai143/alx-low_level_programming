

#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (0);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (0);

	for (a = 0; a < nmemb * size; a++)
	{
		*(p + a) = 0;
	}
	return (p);
}
