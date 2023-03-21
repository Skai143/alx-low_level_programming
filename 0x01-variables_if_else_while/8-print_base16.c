#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int y;
	char z;

	for (y = 0 ; y < 10 ; y++)
		putchar(y + '0');
	for (z = 'a' ; z <= 'f' ; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
