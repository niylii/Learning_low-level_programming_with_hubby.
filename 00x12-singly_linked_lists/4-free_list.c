#include "lists.h"

/**
 * free_list - a function that frees the list_t
 * @head: pointer to the head of the list
 * Retunre: none
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
