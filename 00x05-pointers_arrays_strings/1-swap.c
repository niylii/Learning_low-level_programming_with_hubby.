#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: 1st integer
 * @b: 2nd integer
 *
 * return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
