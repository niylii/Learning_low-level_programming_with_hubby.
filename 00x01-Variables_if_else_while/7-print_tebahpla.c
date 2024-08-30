#include <stdio.h>

/**
* main - entry point of the program.
* Return : always 0 (Success)
*/

int	main(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
