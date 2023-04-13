#include "main.h"
#include <stdlib.h>
/**
 * str_concat - joins two strings
 * @s1: input one
 * @s2: input two
 * Return: s1 followed by s2 joined
 *
 */
char *str_concat(char *s1, char *s2)
{
	int a, b;
	char *join;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;
	join = malloc(sizeof(char) * (a + b + 1));

	if (join == NULL)
		return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
		join[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		join[a] = s2[b];
		a++, b++;
	}

	join[a] = '\0';

	return (join);
}
