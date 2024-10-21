#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: number of integers.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *g;

	g = (int *)malloc(sizeof(int) * b);
	if (g == NULL)
	{
		exit(98);
	}
	return (g);
}
