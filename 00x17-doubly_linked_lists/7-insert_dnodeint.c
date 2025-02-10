#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts new node
 *				at idx
 * @h: a double pointer to the head of the list
 * @idx: the index duuh.
 * @n: the data of that node
 * Return: the adress of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = *h;
	unsigned int i = 0;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	for (; tmp && i < idx - 1; i++)
		tmp = tmp->next;
	if (!tmp || !tmp->next)
		return ((idx = i + 1) ? (add_dnodeint_end(h, n)) : (NULL));
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = tmp;
	node->next = tmp->next;
	tmp->next->prev = node;
	tmp->next = node;
	node = tmp;
	return (node);
}
