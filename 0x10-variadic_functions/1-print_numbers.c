#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_numbers - print numbers and a newline afterwards
  *@separator: numbers seperated by comma and a space
  *@n: number of int in args
  *Return: nothing
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num;

	va_start(num, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num, int));
		if (index < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
