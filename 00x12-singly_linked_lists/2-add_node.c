#include "lists.h"

/**
 * add_node - function that adds a node to the begginning of the list
 * @str : the string that will be stored in the new node
 * @head : double pointer to the head of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
