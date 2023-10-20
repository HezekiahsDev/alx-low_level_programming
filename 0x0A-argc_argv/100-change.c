#include <stdio.h>
#include <stdlib.h>

/**
 * main - print remaining change
 * @arg_count: arg count
 * @arg_vector: arg array
 * Return: 0 if no change or return amount of change remaining
 */

int main(int arg_count, char *arg_vector[])
{
	int rem = 0;
	int change;

	if (arg_count != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(arg_vector[1]);
	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; change >= 0;)
	{
		if (change >= 25)
			change -= 25;

		else if (change >= 10)
			change -= 10;

		else if (change >= 5)
			change -= 5;

		else if (change >= 2)
			change -= 2;

		else if (change >= 1)
			change -= 1;
		else
			break;
		rem += 1;
	}
	printf("%d\n", rem);
	return (0);
}
