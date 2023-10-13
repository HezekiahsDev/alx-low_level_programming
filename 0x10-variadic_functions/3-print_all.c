#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - can print anything (format)
  *@format: list of all args
  *Return: nothing
  */
void print_all(const char * const format, ...)
{
	unsigned int index;
	va_list arguments;
	char *str, *sep;

	va_start(arguments, format);

	sep = "";

	index = 0;
	while (format && format[index])
	{
		switch (format[index])
		{
			case 'c':
				printf("%s%c", sep,  va_arg(arguments, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(arguments, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(arguments, double));
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				index++;
				continue;
		}
		sep = ", ";
		index++;
	}

	printf("\n");
	va_end(arguments);
}
