#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initializing a variable type called type struct dog
* @d: pointer to initialize from the protype
* @name: variable to initialize
* @age: variable to initialize
* @owner: variable to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
	{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
