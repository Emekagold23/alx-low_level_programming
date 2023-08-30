#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the linked list
 *
 * Return: the data of the node
 */

int pop_listint(listint_t **head)

{

	listint_t *temp;
	int a;

	if (head == NULL || *head == NULL)
	return (0);

	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}
