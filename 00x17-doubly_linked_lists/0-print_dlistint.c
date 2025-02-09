#include "lists.h"
/**
 * print_dlistint - a function that prints the elements of a list
 * @h : a pointer to the head of the list to be printed
 * Return: the number of the nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}
