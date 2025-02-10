#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of the data
 *		in the list
 * @head: a pointer to the head of the list
 * Return: the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0, i = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
		i++;
	}
	return (sum);
}
