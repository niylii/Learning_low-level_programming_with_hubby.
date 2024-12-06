#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes a node
 *	 at a giving position
 * @head : a pointer to the head of the list
 * @idx: an index to the giving position
 * Return: 1 (success) or -1 (fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *tmp2;
	unsigned int i = 0;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp && index - 1 > i)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
