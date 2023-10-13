#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_strings - print strings and a new line afterwards
  *@separator: sepearated by comma and a space
  *@n: number of strings inputs from args
  *Return: nothing
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *s;
	va_list str;

	if (separator == NULL)
		separator = "";

	va_start(str, n);

	for (index = 0; index < n; index++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (index < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
