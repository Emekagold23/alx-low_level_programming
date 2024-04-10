#include "search_algos.h"

/**
  * _binary_search - Searches for a target value in a sorted array
 *                           using the binary search algorithm recursively.
 *
 * @array: Pointer to the first element of the array.
 * @left: Starting index of the subarray to search.
 * @right: Ending index of the subarray to search.
 * @target: Value to search for.
 *
 * Return: If the target is not found or the array is NULL, return -1.
 *         Otherwise, return the index where the target is located.
 *
 * Description: This function recursively divides the array in half and
 *              checks if the target value is in the left or right half
 *              until the target is found or the array is fully searched.
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Utilizes exponential search algorithm
 *                       to find a value in a sorted integer array.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 *
 * Description: This function efficiently searches a sorted array
 *              by exponentially increasing the search range until
 *              finding the subrange where the value might be located.
 *              It then performs binary search within that subrange.
 *              Prints the compared values during the search process.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
