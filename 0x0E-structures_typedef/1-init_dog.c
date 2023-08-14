#include "dog.h"
#include <stdio.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the pointer to struct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)

	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
