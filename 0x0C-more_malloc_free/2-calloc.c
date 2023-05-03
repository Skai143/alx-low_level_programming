

#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 *Return: NULL if fail. pointer otherwise
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);

	_memset(pt, 0, nmemb * size);

	return (pt);
}
