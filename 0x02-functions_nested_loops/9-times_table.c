#include "main.h"

/**
 * times_table - Print the 9 times table from 0.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
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
