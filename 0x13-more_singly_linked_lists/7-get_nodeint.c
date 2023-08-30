#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at an index
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Return: pointer to the returned node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int n = 0;
	listint_t *temp = head;

	while (temp && n < index)
	{
	temp = temp->next;
	n++;
	}

	return (temp ? temp : NULL);
}
