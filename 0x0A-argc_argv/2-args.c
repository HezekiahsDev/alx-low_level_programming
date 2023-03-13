#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all the arguments a program receives.
 *
 *@argc: number of arguments
 *
 *@argv: array of arguments.
 *
 *Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	int n;

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
