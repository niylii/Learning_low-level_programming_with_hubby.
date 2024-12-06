#include "lists.h"

/**
 * sum_listint - a function thta sums all of the data (n) of a list
 * @head :  a pointer to the head of the list
 * Return: the sum and  if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int data = 0;

	while (tmp)
	{
		data += tmp->n;
		tmp = tmp->next;
	}
	return (data);
}
