#include "main.h"

/**
* print_triangle - function that prints a triangle
* @size : is the size of the triangle
* @i : tracker
* @k : tracker 
*
* return : none;
*/

void	print_triangle(int size)
{
	int	i;
	int	k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 1;
		while (i <= size)
		{
			k = size - i;
			while (k > 0)
			{
				_putchar(' ');
				k--;
			}
			k = 0;
			while (k < i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
