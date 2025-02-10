#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node
 *	at given index
 * @head: double pointer to the head of the list
 * @index: the index of the node to be removed
 * Return: 1 if the function succeed
 *	  -1 if it failes
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (!node)
		return (-1);
	if (node->prev)
		node->prev->next = node->next;
	else
		*head = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
	return (1);
}
