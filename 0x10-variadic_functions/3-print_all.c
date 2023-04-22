#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - function prints int
 * @arg: argument
 */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
 * print_float - function prints float
 * @arg: argument
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - function prints strings.
 * @arg: argument
 */

void print_string(va_list arg)
{
	char *a = va_arg(arg, char *);

	if (a == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", a);
}

/**
 * print_all - function that prints anything.
 * @format: format specifier
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int x, y;
	char *sep = "";

	print_d data[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(arg, format);

	x = 0;
	while (format && *(format + x))
	{
		y = 0;
		while (y < 4 && *(format + x) != *(data[y].c))
		{
			y++;
		}

		if (y < 4)
		{
			printf("%s", sep);
			data[y].f_pr(arg);
			sep = ", ";
		}
		x++;
	}
	printf("\n");

	va_end(arg);
}
