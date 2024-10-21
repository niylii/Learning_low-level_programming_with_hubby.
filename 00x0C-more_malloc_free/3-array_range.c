#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min : the smallest integers.
 * @max : the greatest integers.
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ori, *arr, num;

	num = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * num);
	if (arr == NULL)
		return (NULL);
	ori = arr;
	while (num--)
	{
		*arr++ = min;
		min += 1;
	}
	return (ori);
}
