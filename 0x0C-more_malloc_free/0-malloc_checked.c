#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * Return: pointer to the new allocated memory
 */

void *malloc_checked(unsigned int b)

{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	else
		return (ptr);
}
