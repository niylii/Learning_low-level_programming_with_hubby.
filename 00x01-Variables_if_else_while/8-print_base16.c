#include <stdio.h>

/**
* main - entry point for the program.
* Return : always 0 (success)
*/

int	main(void)
{
	int	n;

	n = 0;
	while (n <= 15)
	{
		if (n < 10)
			putchar(n + '0');
		else
			putchar(n - 10 + 'a');
		n++;
	}
	putchar('\n');
	return (0);
}
