#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min value
 * @max: max value
 *
 * Return: integer value
 */

int *array_range(int min, int max)

{
	int *arr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
