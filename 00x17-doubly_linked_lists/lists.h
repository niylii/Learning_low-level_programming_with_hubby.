#ifndef LISTS
#define LISTS

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_ - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_
{
	int n;
	struct dlistint_ *next;
	struct dlistint_ *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif
