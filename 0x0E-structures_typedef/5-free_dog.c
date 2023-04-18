#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog referenced by *d
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
