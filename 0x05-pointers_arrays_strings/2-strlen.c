#include "main.h"
/**
 *int _strlen: returns the length of a string
 *@s: this is the character name
 *
 *Return: Always 0 as successful.
 */
int _strlen(char *s);

{
	int lt = 0;

	while (*s++)
	lt++;
	return lt;
}
