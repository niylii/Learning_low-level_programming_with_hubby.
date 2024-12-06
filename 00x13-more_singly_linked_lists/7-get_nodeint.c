#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer to th ehead of the list
 * @index: the index of the node starting at 0
 * Return: the nth node of the list
 *	 NULL if the nide diesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
