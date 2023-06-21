#include "main.h"

/**
 * free_dog -  function that frees dogs.
 * @d: struct name
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
