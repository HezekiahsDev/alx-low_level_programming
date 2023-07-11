#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add positive integers
 * @argc: arguments index
 * @argv: arguments array
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int  i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int x;
			char *str;

			str = argv[i];
			for (x = 0; str[x] != '\0'; x++)
			{
				if (str[x] < 48 || str[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
