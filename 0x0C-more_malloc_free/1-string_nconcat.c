#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from 2nd string
 *
 * Return: 0 if failed, otherwise, it returns pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *y, *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
		*p++ = s1[i];
	}
	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		*p++ = s2[j];
	}

	y = malloc(i + j + 1);

	if (y == NULL)
	{
		return (NULL);
	}
	*p = '\0';
	return (y);
}
