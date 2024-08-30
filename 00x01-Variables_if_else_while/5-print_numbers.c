#include <stdio.h>

/**
* main - entry point for the program.
* Return : always 0 (success)
*/

int	main(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
