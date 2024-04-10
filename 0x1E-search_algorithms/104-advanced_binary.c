#include "search_algos.h"

/**
 * rec_search - Utilizes binary search algorithm to find a value
 *              in a sorted array of integers recursively.
 *
 * @array: Pointer to the first element of the array.
 * @size: Size of the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 *
 * Description: This function searches for a target value in a sorted array
 *              by dividing the array into halves and recursively searching
 *              in the appropriate half until the value is found or the search
 *              range is exhausted. Returns the index of the value if found,
 *              otherwise -1 is returned.
 */

int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
