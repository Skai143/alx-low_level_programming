#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, amount;
	unsigned int a;
	char *ptr;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &ptr, 10);
	amount = 0;

	if (!*ptr)
	{
		while (sum > 1)
		{
			for (a = 0; a < sizeof(cents[a]); a++)
			{
				if (sum >= cents[a])
				{
					amount += sum / cents[a];
					sum = sum % cents[a];
				}
			}
		}
		if (sum == 1)
			amount++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", amount);
	return (0);
}
