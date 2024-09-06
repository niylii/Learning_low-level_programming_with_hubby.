#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9.
*	@n : the number
*
* return : none.
*/

void	print_numbers(void)
{
	int	n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
