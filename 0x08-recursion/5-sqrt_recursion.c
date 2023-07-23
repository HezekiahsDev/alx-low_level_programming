#include "main.h"
/**
  *root - test for posible sqrt
  *@input: number input
  *@compute: compute the sqrt of input
  *
  *Return: sqrt n or -1 on error
  */
int root(int input, int compute)
{
	if ((compute * compute) == input)
	{
		return (compute);
	}
	else
	{
		if ((compute * compute) > input)
			return (-1);
		else
			return (root(input, compute + 1));

	}
}

/**
  *_sqrt_recursion - find the sqrt of a number
  *@n: number inpute
  *
  *Return: return the sqrt of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (root(n, 0));
}
