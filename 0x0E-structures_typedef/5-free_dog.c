#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees mem
 * @d: struct dog to free memory of
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
