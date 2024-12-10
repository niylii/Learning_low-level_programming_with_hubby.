#include "lists.h"

/**
 * reverse_listint - a function that reverses a list
 * @head : pointer to the head of the list
 * Return:  a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
