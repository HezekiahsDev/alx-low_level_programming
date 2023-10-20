#include <stdio.h>

/**
 * main - print program name on launch even if renamed
 * @arg_count: argument count
 * @arg_vector: arg vector (array of arguments)
 * Return: 0
 */
int main(int arg_count, char *arg_vector[])
{
	/* print out */
	printf("%s\n", arg_vector[0]);
	(void)arg_count;
	return (0);
}
