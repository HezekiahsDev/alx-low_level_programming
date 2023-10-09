#include <stdlib.h>
/**
  * malloc_checked - confirm mem allocation
  * @b: memory size
  * Return: address of memory alloced
  */
void *malloc_checked(unsigned int b)
{
	void *ptr_mem = malloc(b);

	if (ptr_mem == NULL)
		exit(98);

	return (ptr_mem);
}
