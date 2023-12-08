#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @h: the head of the list
 * @n: the value of the element
 * Return: the address of the new element
 * or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n =n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while(h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;
	return (new);
}
