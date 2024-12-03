#include "lists.h"

/**
 * print_list - function that prints all elements of a list_t list
 * @h: pointer to the head of the list_t structure
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t n_node = 0, len = 0;
	const char *str;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			n_node++;
		}
		else
		{
			str = h->str;
			while (str[len] != '\0')
				len++;
			printf("[%lu] %s\n", len, h->str);
			len = 0;
			n_node++;
		}
		h = h->next;
	}
	return (n_node);
}
