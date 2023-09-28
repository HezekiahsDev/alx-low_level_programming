#include "main.h"
/**
 * confirm - confirm if a number exist
 * @num: number
 * @roots: square root
 *
 * Return: square root
 */
int confirm(int num, int roots)
{
	if ((roots * roots) == num)
	{
		return (roots);
	}
	else
	{
		if ((roots * roots) > num)
			return (-1);
		else
			return (confirm(num, roots + 1));

	}
}

/**
 * _sqrt_recursion - compute sqrt of number input
 * @n: number
 * Return: results, or error code
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (confirm(n, 0));
}
