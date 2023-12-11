#include <stdio.h>

/**
  *add - add up 2 numbers
  *@a: int_1
  *@b: int_2
  *
  *Return: sum (a + b)
  */
int add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
  *sub - subracte b from a
  *@a:  int_1
  *@b: int_2
  *
  *Return: difference (a - b)
  */
int sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}

/**
  *mul - multiply two ints
  *@a: integer1
  *@b: integer2
  *
  *Return: product (a * b)
  */
int mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
  *div - quotient of a and b
  *@a: integer1
  *@b: integer2
  *
  *Return: quotient (a / b)
  */
int div(int a, int b)
{
	int quo = a / b;

	/*check validity of denum*/
	if (b == 0)
	{
		printf("Error\n");
	}
	return (quo);
}

/**
  *mod - modulus of a / b
  *@a: integer1
  *@b: integer2
  *
  *Return: remainder from mod a / b
  */
int mod(int a, int b)
{
	int _mod = a % b;

	/*check validity of denum*/
	if (b == 0)
	{
		printf("Error\n");
	}
	return (_mod);
}
