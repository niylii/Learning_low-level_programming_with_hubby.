#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a node at the end
 * @head: a double pointer to the head of the list
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = node;
	node->prev = last;
	return (node);
}
