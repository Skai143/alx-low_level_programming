#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	char y;

	for (y = 'z' ; y >= 'a' ; y--)
		putchar(y);
	putchar('\n');
	return (0);
}
