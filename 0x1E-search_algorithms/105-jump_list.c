#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a singly linked list
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list.
 * @size: Number of elements in the linked list.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 *
 * Description: This function efficiently searches a singly linked list
 *              by dividing it into blocks and performing linear search
 *              in each block until finding the block where the value might
 *              be located. It then performs linear search within that block.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do {
		prev = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;

		if (list->next == NULL && index != list->index)
			index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

	} while (index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
