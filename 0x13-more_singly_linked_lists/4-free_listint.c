#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: the pointer to be freed
 * Return: nothing
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
