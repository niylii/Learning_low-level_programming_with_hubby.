#include "lists.h"

/**
 * print_listint -   function that prints all elements of a `listint_t` list
 * @h :pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
