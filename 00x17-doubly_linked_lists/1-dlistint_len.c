#include "lists.h"
/**
 * print_dlistint - a function that returns the number
 *	 of the elements of a list
 * @h : a pointer to the list head
 * Return: the number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
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
