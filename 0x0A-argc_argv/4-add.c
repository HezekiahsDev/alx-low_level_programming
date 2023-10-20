#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add up numbers from arg input
 * @arg_count: arg index
 * @arg_vector: argument array
 * Return: 0
 */
int main(int arg_count, char *arg_vector[])
{
	int add = 0;
	int n;

	if (arg_count > 1)
	{
		for (n = 1; n < arg_count; n++)
		{
			int i;
			char *string;

			string = arg_vector[n];
			for (i = 0; string[i] != '\0'; i++)
			{
				/* condition for error check */
				if (string[i] < 48 || string[i] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (n = 1; n < arg_count; n++)
	{
		add += atoi(arg_vector[n]);
	}
	printf("%d\n", add);
	return (0);
}
