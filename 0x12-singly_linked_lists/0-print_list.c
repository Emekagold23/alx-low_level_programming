#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to a list_t list head to print
 *
 * Return: the number of printed nodes in the linked list.
 */

size_t print_list(const list_t *h)

{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (i);
}
