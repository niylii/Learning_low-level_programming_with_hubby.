#include "lists.h"
/**
 * dlistint_len - a function that returns the number
 *	 of the elements of a list
 * @h : a pointer to the list head
 * Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
