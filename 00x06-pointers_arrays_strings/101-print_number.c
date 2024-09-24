#include "main.h"

/**
* print_number -  function that prints an integer.
* @n: the number
* Return: none
*/

void print_number(int n)
{
	unsigned int div;

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
		_putchar(n / div + '0');
		n %= div;
		div /= 10;
	}
}
