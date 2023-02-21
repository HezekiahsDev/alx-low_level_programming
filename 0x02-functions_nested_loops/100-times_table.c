#include "main.h"

/**
 * print_times_table - Print the 9 times table from 0.
 * @n: input
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
int i, j, k;

k = i * j
if ((n >= 0) && (n <= 15))
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0' + k);
			}
			else if (n <= 15)
			{
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			if (j != k)
			{
			_putchar(',');
			}
		}
		_putchar('\n');
	}
}
}
