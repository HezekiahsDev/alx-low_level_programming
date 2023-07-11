#include <stdio.h>
/**
 * main - show the number of arg input
 * @args: arguments index
 * @argv: arguments array
 * Return: always 0.
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);

}
