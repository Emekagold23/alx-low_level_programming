#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the struct dog to print
 */

void print_dog(struct dog *d)

{
	if (d != NULL)

	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->name) ? d->age : 0);
		printf("Owner: %s\n", (d->name) ? d->owner : "(nil)");
	}
}
