#include "main.h"

/**
 * print_binary - a function that prints n binary representation
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = n;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
	if (n == 0)
		_putchar('0');
}
