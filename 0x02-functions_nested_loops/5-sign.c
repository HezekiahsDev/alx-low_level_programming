#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: Number to check.
 *
 * Return: 1 if n is greater than 0,
 * 0 if n is eqaull to 0,
 * -1 if n is less than 0.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return result;
}
