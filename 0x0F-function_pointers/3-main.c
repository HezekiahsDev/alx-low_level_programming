#include "3-calc.h"
/**
  *main - check arguments
  *@arg_count: arg array count
  *@arg_vector: arg array vector
  *Return: set error number appropriately
  */
int main(int arg_count, char *arg_vector[])
{
	int i = 0, j = 0, result = 0;
	char string;

	if (arg_count != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check for number of operators */
	if (arg_vector[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	string = arg_vector[2][0];
	if (string != '+' && string != '-' &&
	string != '/' && string != '*' && string != '%')
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(arg_vector[1]);
	j = atoi(arg_vector[3]);
	result = (get_op_func(arg_vector[2]))(i, j);
	printf("%d\n", result);
	return (0);
}
