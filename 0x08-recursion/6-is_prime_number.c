#include "main.h"
/**
  *prime - prime number
  *@number: number to check
  *@f: factors
  *
  *Return: If number is a prime number,
  *return value is 1(true) else 0(false).
  */
int prime(int number, int f)
{
	if (f < number)
	{
		if (number % f == 0)
		{
			return (0);
		}
		else
		{
			return (prime(number, f + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - confirm prime number
  *@n: number input
  *
  *Return: the return value of prime function
  *or 0 if it's not prime
  */
int is_prime_number(int n)
{
	/* test base case */
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (Prime(n, 2));
	}
}
