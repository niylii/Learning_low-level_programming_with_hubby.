#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: a pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
