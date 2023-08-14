#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees memory allocated for a struct dog
 * @d: the struct dog to free
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
