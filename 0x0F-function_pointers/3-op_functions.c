#include "3-calc.h"
/**
  *op_add - add up 2 numbers
  *@a: int_1
  *@b: int_2
  *
  *Return: sum (a + b)
  */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
  *op_sub - subracte b from a
  *@a:  int_1
  *@b: int_2
  *
  *Return: difference (a - b)
  */
int op_sub(int a, int b)
{
	int dif = a - b;

	return (dif);
}

/**
  *op_mul - multiply two ints
  *@a: integer1
  *@b: integer2
  *
  *Return: product (a * b)
  */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
  *op_div - quotient of a and b
  *@a: integer1
  *@b: integer2
  *
  *Return: quotient (a / b)
  */
int op_div(int a, int b)
{
	int quo = a / b;

	/*check validity of denum*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (quo);
}

/**
  *op_mod - modulus of a / b
  *@a: integer1
  *@b: integer2
  *
  *Return: remainder from mod a / b
  */
int op_mod(int a, int b)
{
	int mod = a % b;

	/*check validity of denum*/
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (mod);
}
