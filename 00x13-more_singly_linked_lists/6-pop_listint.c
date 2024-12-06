#include "lists.h"

/**
 * pop_listint - a function that deletes a head of node of a list
 * @head : a pointer to the head of the list
 * Return: the head node's data
 *	0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (data);
}
