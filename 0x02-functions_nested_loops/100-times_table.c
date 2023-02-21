#include "main.h"

/**
 * print_times_table - Print the 9 times table from 0.
 * @n: input
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, n;

if ((n >= 0) || (n <= 15))
{
	for (i = n; i <= 9; i++)
	{
		for (j = n; j <= 9; j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar('0' + n);
			}
			else if (n >= 10)
			{
				_putchar(' ');
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + n);
			}
			if (j != 9)
			{
			_putchar(',');
			}
		}
		_putchar('\n');
	}
}
}
