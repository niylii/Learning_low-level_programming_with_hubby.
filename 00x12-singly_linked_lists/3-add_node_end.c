#include "lists.h"

/**
 * add_node_end - function that adds a node to the end of the list
 * @str : the string that will be stored in the new node
 * @head : double pointer to the head of the list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
	return (node);
}
