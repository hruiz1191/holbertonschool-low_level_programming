#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: perro a liberar info
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
