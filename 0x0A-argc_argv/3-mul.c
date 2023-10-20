#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers from arg input
 * @arg_count: arg index
 * @arg_vector: arg array
 * Return: 0
 */
int main(int arg_count, char *arg_vector[])
{
	int inputs, mul;

	mul = 1;
	if (arg_count < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (inputs = 1; inputs < arg_count; inputs++)
	{
		mul = mul * atoi(arg_vector[inputs]);
	}
	printf("%d\n", mul);
	return (0);
}
