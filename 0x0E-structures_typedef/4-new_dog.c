#include <stdlib.h>
#include "dog.h"
/**
  *new_dog - create data for a new dog
  *@name: dog's name
  *@age: dog's age
  *@owner: dog's owner
  *desc>> a = strlen of name, b = strlen of owner
  *Return: new dog info or NULL on failure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int indx, a, b;

	struct dog *n_dog = NULL;

	for (a = 0; name[a] != '\0'; a++)
		;

	for (b = 0; owner[b] != '\0'; b++)
		;

	/*malloc for struct and validate*/
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(a + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(b + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (indx = 0; indx <= a; indx++)
		n_dog->name[indx] = name[indx];
	for (indx = 0; indx <= b; indx++)
		n_dog->owner[indx] = owner[indx];
	n_dog->age = age;
	return (n_dog);
}
