#include "main.h"

/**
* print_square -  function that prints a square
* @size : is the size of the square
* @i : indecator to keep track
*
* return : none 
*/

void	print_square(int size)
{
	int	i;
	int	j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		j = 0;
		while (j < size)
		{
			i = 0;
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			j++;
		}
	}
}
