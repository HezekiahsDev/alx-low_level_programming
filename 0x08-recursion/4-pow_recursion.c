#include "main.h"
/**
 * _pow_recursion - rec func for power
 * @x: num
 * @y: power
 *
 * Return: result or error code
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
