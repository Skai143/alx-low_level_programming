#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, sum = 0;
	char *ptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &ptr, 10);
		if (*ptr)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
