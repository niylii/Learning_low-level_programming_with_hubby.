#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the number
 * @index: the index
 * Return: 1 (success)
 *	-1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= sizeof(*n) * 8)
		return (-1);
	mask <<= index;
	*n &= ~mask;
	return (1);
}
