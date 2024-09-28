#include "main.h"
#include <stdio.h>

/**
* print_diagsums - a function that prints the sum of the two diagonals
*	 of a square matrix of integers.
* @a : a pointer to a string
* @size : the size
* Return: none
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int d1 = 0, d2 = 0;

	while (i < size)
	{
			d1 += a[(i * size) + i];
			d2 += a[i * size + (size - 1 - i)];
		i++;
	}
	printf("%d , %d\n", d1, d2);
}
