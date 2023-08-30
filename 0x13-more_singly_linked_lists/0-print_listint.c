#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the linked list of listint_t to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)

	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num);
}
