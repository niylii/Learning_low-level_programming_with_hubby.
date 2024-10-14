#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * @size: size of the array
 * @c : character
 * Return: a pointer to the array
 *	or NULL if size = 0 (or in case of a fail)
 */

char *create_array(unsigned int size, char c)
{
	char *arr, *org;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	org = arr;
	while (size > 0)
	{
		*arr++ = c;
		size--;
	}
	return (org);
}
