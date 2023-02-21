#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print al natural numbers from n to 98
 * @n: Startin point.
 *
 * Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
