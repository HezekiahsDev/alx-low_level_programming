#include <stdio.h>
#include <stdlib.h>
/**
 * main - Product of 2 numbers
 * @argc: arguments index
 * @argv: arguments array
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int cnt;
	int prd = 1;

	if (cnt < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (cnt = 1; cnt < argc; cnt++)
	{
		prd = prd * atoi(argv[cnt]);
	}
	printf("%d\n", prd);
	return (0);
}
