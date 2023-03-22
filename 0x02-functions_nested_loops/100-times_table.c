#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, times, y;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				y = num * times;

				if (y <= 99)
					_putchar(' ');
				if (y <= 9)
					_putchar(' ');

				if (y >= 100)
				{
					_putchar((y / 100) + '0');
					_putchar(((y / 10)) % 10 + '0');
				}
				else if (y <= 99 && y >= 10)
				{
					_putchar((y / 10) + '0');
				}
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
