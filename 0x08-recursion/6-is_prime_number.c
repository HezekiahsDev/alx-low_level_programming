#include "main.h"
/**
 * confirm - confirm prime number
 * @num_in: number
 * @pr: prime fact.
 *
 * Return: 1 - true, 0 - false
 */
int confirm(int num_in, int pr)
{
	if (pr < num_in)
	{
		if (num_in % pr == 0)
		{
			return (0);
		}
		else
		{
			return (confirm(num_in, pr + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - check for prime factors
 * @n: number
 *
 * Return: true = 1, false = 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (confirm(n, 2));
	}
}
