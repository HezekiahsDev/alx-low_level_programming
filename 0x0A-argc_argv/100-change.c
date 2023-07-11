#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @args: Paramater Entry
 * @argv: One number of argumets
 * Return: zero onOne number of argumetsr
 */

int main(int args, char *argv[])
{
	int cash;
	int left = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; cash >= 0;)
	{
		if (cash >= 25)
			cash -= 25;

		else if (cash >= 10)
			cash -= 10;

		else if (cash >= 5)
			cash -= 5;

		else if (cash >= 2)
			cash -= 2;

		else if (cash >= 1)
			cash -= 1;
		else
			break;
		left += 1;
	}
	printf("%d\n", left);
	return (0);
}
