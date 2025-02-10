#include "lists.h"
/**
 * get_dnodeint_at_index - a function that
 *	returns the nth node of a dlistint_t linked list.
 * @head: a pointer to the head of the list
 * @index: the index duuh
 * Return: the nth node or NULL if doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node = head;

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
