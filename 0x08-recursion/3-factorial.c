#include "main.h"
/**
 * factorial - rec func for factorial
 * @n: num
 *
 * Return: factorial or error -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
