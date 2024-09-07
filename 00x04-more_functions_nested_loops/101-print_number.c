#include "main.h"

/**
* print_number -  function that prints an integer.
*   @n : the number to be printed
*   @div : divisor
*   @dig : digit
* return : none 
*/

void	print_number(int n)
{
	int		dig;
	unsigned int	div;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	div = 1;
	while (n / div >= 10)
		div *= 10;
	while (div > 0)
	{
		dig = n / div;
		_putchar(dig + '0');
		n %= div;
		div /= 10;
	}
}
