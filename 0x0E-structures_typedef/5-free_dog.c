#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free memory allocated to dog struct
  *@d: structure
  *Return: nill
  */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);

}
