#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer,
*              starting from 00:00 to 23:59.
* Return : nothing .
*/

void	jack_bauer(void)
{
	int	j;
	int	k;
	int	l;

	j = 0;
	while (j <= 23)
	{
		k = 0;
		while (k <= 5)
		{
			l = 0;
			while (l <= 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
				l++;
			}
			k++;
		}
		j++;
	}
}
