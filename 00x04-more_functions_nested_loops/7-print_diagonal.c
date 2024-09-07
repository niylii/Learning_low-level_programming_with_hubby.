#include "main.h"

/**
* print_diagonal  -  function that draws diagonal line in the terminal
* @n : is the number of times the character \ should be printed
* @i : indecator to keep track
* @j : indecator to keep track
*
* return : none 
*/

void	print_diagonal(int n)
{
	int	i;
	int	j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
