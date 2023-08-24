#include "lists.h"

/**
 * add_node - add a node to the beginning of the list
 * @head: the pointer to the head of the list
 * @str: string to be placed in the first position
 * Return: the pointer to the first node
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;
	size_t len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	*head = new_node;

	return (*head);
}
