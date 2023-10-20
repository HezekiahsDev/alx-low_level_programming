#include <stdio.h>
#include <stdlib.h>

/**
 *main - print out all the arguments input
 *@arg_count: arguments index
 *@arg_vector: arguments array
 *Return: 0
 */

int main(int arg_count, char *arg_vector[])
{
	/* input count */
	int input;

	for (input = 0; input < arg_count; input++)
	{
		printf("%s\n", arg_vector[input]);
	}
	return (0);
}
