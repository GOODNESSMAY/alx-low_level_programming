#include <stdlib.h>
#include "dog.h"

/**
* free_dog - frees memory a dog
* @d: struct dog to use to free a dog.
*/
	void free_dog(dog_t *d)
	{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
	}
