#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the addition of a and b
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the multiplication of a and b
 */

int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient of a and b
 */

int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the modulus of a and b
 */

int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (a % b);
}
