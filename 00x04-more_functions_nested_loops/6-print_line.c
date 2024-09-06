#include "main.h"

/**
* print_line -  function that draws a straight line in the terminal
* @n : is the number of times the character _ should be printed
* @i : indecator to keep track
*
* return : none 
*/

void	print_line(int n)
{
	int	i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
