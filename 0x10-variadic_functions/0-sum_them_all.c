#include <stdarg.h>
/**
  *sum_them_all - sum up all argument inputs
  *@n: number of arguments
  *Return: sum of arg or 0 if there's an error
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int add = 0, index;
	va_list args_list;

	/*test base case*/
	if (n == 0)
		return (0);

	va_start(args_list, n);

	for (index = 0; index < n; index++)
	{
		add += va_arg(args_list, int);
	}
	va_end(args_list);

	return (add);
}
