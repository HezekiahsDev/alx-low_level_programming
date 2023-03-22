#include "3-calc.h"
/**
 * main - check arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: error if number of arument is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, res = 0;
	char s;

	/**
	 * lets check number of arguments in
	 * this manner, "program" "a" "+" "b".
	 * arguments shoul be just 4.
	 * If not, thats an error (98)
	 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* check if there's only one operator */
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	/* convert the string inputs to integer */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	/* perform operation based on the operator */
	res = (get_op_func(argv[2]))(a, b);
	printf("%d\n", res);
	return (0);
}
