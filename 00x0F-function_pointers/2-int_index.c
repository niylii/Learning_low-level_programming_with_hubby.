#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer
 * @array:  the array
 * @size : number of elements in the array
 * @cmp : a function pointer to compare values
 * Return: the index of the first element
 *	-1 if no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if(cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
