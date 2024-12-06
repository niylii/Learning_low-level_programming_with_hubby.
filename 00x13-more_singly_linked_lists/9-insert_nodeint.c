#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 *	 at a giving position
 * @head : a pointer to the head of the list
 * @idx: an index to the giving position
 * @n : the data to insert
 * Return: the adress of the new node or NULL (fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i = 0;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	if (idx == i)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	while (i < (idx - 1) && tmp)
	{
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
