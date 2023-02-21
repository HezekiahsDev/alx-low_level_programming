#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: number to work on.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int  n)
{
	int last_digit;

	if (n >= 0)
	{
		last_digit = (n % 10);
	}
	else
	{
		last_digit = ((n % 10) * -1);
	}
	return(last_digit);
}
