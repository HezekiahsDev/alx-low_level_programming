#include <stdio.h>

/**
 * main - Entry for a program that prints its name when ran
 * @argc: arguments index
 * @argv: arguments array
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
