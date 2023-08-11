#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * nmemb: the number of array
 * @size: the size of array
 * Return: pointer to newly allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int i = 0, l = 0;
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	output = malloc(l);

	if (output == NULL)
		return (NULL);

	while (i < l)
	{
		output[i] = 0;
			i++;
	}
	return (output);
}
