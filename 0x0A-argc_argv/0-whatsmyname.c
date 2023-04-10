#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name it is given or saved as, followed by a new line.
 * @argc: argument count
 * @argv: arguments given to the program
 *
 * Return: 0
 */
int main(__attribute__ ((unused))int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
