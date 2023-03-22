#include "3-calc.h"

/**
 * op_add - return the sum of 2 integers
 * @a: integer
 * @b: integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - calculate the difference between two numbers
 * @a: integer
 * @b: integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	int sub = a -  b;

	return (sub);
}

/**
 * op_mul - multiply two numbers
 * @a: integer
 * @b: integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - calculate the quotient of two numbers.
 * @a: integer
 * @b: integer
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	int quo;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	quo = a / b;
	return (quo);
}

/**
 * op_mod - find the remainder of quotients
 * @a: integer
 * @b: integer
 *
 * Return: remainder of quotients
 */
int op_mod(int a, int b)
{
	int quo;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	quo = a % b;
	return (quo);
}
