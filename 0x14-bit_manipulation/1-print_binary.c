#include "main.h"

/**
 * print_binary - print a number in base 2
 * @n: binary representacion
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	/* checck if n exists */
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

