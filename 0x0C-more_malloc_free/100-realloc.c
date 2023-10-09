#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocate a memory block (bytes)
 * @ptr: first byte of old memory
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *block;
	char *old_block;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	/*validate memory block*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	/*memory allocation to block*/
	block = malloc(new_size);
	if (!block)
		return (NULL);

	old_block = ptr;

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			block[index] = old_block[index];
	}

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			block[index] = old_block[index];
	}

	free(ptr);
	return (block);
}
