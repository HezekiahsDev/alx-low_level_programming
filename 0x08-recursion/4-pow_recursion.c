#include "main.h"
/**
 * _pow_recursion - returns the value of x to the power of y.
 * @x: number.
 * @y: power.
 * Return: return x ^ y or -1 if error(y<0)
  */
int _pow_recursion(int x, int y)
{
	/* test base case */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
