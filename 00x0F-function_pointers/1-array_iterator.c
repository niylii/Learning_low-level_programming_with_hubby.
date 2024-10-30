#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given
 *	 as a parameter on each element of an array.
 * @array: array of elements
 * @size : the saze of the array
 * @action : pointer to a function
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	while (i < size)
		action(array[i++]);
}
