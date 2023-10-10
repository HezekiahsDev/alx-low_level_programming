#ifndef __STRUCT_AND_TYPEDEF_FOR_A_DOG_
#define __STRUCT_AND_TYPEDEF_FOR_A_DOG_

/**
 * struct dog - structure def for var dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
