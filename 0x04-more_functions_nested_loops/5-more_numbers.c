#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int lines, numbers;

	/* Set loop for line number */
	for (lines = 0; lines < 10; lines++)
	{
		/* Set a loop to print 1 to 14 */
		for (numbers = 0; numbers <= 14; numbers++)
		{
			/* Set condition for numbers from 10 upwards */
			if (numbers > 9)
			{
				/* This expression prints the tens */
				_putchar((numbers / 10) + '0');
			}
			/* This expression prints the units */
			_putchar((numbers % 10) + '0');
		}
		/* This one prints a new line */
		_putchar(10);
	}
}


