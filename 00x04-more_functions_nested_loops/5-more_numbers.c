#include "main.h"

/**
* print_numbers -  function that prints the numbers, from 0 to 9.
*	@n : the number
*	@t : the times 
* return : none.
*/

void	more_numbers(void)
{
	int	n;
	int	t;

	t = 0;
	while (t < 10)
	{
		n = 0;
		while (n < 15)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		t++;
		_putchar('\n');
	}
}
