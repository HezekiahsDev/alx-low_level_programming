#include <stdio.h>
#include <stdlib.h>
/**
  *main - display machine opcode
  *@arg_count: arg array count
  *@arg_vector: arg array vector
  *
  *Return: always 0
  */
int main(int arg_count, char *arg_vector[])
{
	int a, b;

	if (arg_count != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(arg_vector[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < b; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < b - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
