#include <stdio.h>

/**
* main - entry point of the program.
* Return : always 0 (Success)
*/

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
