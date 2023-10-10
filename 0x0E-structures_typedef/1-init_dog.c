#include <stdlib.h>
#include "dog.h"
/**
  *init_dog - create an initialize a record with variable "dog"
  *@d: address structure to be used
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *Return: nill
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
