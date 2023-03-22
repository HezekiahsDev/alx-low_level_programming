#include "main.h"
/**
 * print_name - prints a name.
 * @name: pointer to a name.
 * @f: pointer to funtction to print.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	(*f)(name);
}
