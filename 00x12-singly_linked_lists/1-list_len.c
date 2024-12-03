#include "lists.h"

/**
 * list_len - function that returns the number of elements in list
 * @h: pointer to the head of the list_t structure
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t n_node = 0;

	while (h != NULL)
	{
		n_node++;
		h = h->next;
	}
	return (n_node);
}
