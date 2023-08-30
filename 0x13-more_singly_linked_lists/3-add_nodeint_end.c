#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to to the head of the list
 * @n: the data to added to the new element
 *
 * Return: pointer to the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
