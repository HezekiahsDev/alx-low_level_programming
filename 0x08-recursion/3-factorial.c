#include "main.h"
/**
  *factorial - factorial
  *@n: factor
  *Return: factorial or -1 if n is less than 0
  */
int factorial(int n)
{
	/* test base case */
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
