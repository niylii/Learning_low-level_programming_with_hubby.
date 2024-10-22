#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr : pointer to the memory previously allocated with a call to
 *	 malloc: malloc(old_size)
 * @old_size : is the size, in bytes, of the allocated space for ptr.
 * @new_size : is the new size, in bytes of the new memory block
 * Return: pointer to new memory
 *	NULL (fail).
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *ptr3;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (NULL);
		free(ptr);
		return (ptr2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	ptr3 = ptr;
	while (*ptr2)
	{
		*ptr3++ = *ptr2++;
	}
	free(ptr);
	return (ptr3);
}
