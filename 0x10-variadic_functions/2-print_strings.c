#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - print strings followed by a new line
 * @seperator: string to be printed between strins
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (seperator == NULL)
		seperator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(strings);
}
