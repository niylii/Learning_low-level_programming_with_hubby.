#include "main.h"

/**
 * _calloc - function that allocates memory for any array.
 * @nmemb : number of elements.
 * @size : the size of elements.
 * Return: none.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *ori;
	unsigned int nbr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	nbr = size * nmemb;
	ptr = malloc(nbr);
	if (ptr == NULL)
		return (NULL);
	ori = ptr;
	while (nbr--)
		*ptr++ = 0;
	return (ori);
}
