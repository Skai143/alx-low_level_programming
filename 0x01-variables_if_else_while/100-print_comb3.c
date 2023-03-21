#include <stdio.h>

/**
 *main - main function
 *
 * Return: 0
 */

int main(void)
{
	int y;
	int z;

	for (y = 0 ; y < 10 ; y++)
	{
		for (z = 1 ; z < 10 ; z++)
		{
			if (y < z && y != z)
			{
				putchar(y + '0');
				putchar(z + '0');
				if (y + z != 17)
				{
					putchar(",");
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
