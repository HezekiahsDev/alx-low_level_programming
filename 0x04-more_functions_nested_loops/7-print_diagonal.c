#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int slant_lines;
	int spaces;

	/* Check if n is greater than 0 */
	if (n > 0)
	{	/* Loops to print slant lines */
		for (slant_lines = 0; slant_lines < n; slant_lines++)
		{
			/* Loop for spaces offset */
			for (spaces = 0; spaces < slant_lines; spaces++)
			{
				_putchar (' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
	}
	/* If n is not greater than 0 just print a new line */
	else
	{
	_putchar ('\n');
	}
}

