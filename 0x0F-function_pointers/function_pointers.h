#ifndef __FUNCTION_POINTER_HEADER_FILE__
#define __FUNCTION_POINTER_HEADER_FILE__

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void _putchar(char *c);
void print_name(char *name, void (*f)(char *));

#endif
