#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the double pointer to the list_t
 * @str: the string to be included in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node;
	list_t *temp = *head;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
