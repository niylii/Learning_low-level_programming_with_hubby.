#include "main.h"

/**
* print_last_digit - prints the last digit of a number.
* @n : the number 
* @ld : last digit  
* @abs : absolute value of the last digit
* 
* return : last digit of n.
*/

int	print_last_digit(int n)
{
	int	ld;
	int	abs;

	ld = n % 10;
	abs = ld * (-1);
	if (n >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(abs + '0');
		return (abs);
	}
}
