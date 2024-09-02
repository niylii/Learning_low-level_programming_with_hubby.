#include "main.h"

/**
* print_alphabet_x10 - prints alphabet in lowercase
* @t: the number of times.
*
* return : nothing 
*/

void	print_alphabet_x10(void)
{
	char	c;
	int		t;

	t = 1;
	while (t < 11)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		t++;
	}
}
