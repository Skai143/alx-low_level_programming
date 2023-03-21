#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int y;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
