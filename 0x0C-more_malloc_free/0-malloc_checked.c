#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: bytes
 *
 * Return: 98 if failed, otherwise, it returns pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
