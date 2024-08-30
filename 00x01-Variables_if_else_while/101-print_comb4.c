#include <stdio.h>

/**
* combo_3 - prints combination of three digits.
* Return : the function performs its task (printing combinations)
*/

void	combo_3(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

/**
* main - entry point for the program.
* Return : always 0 (success)
*/

int	main(void)
{
	combo_3();
	putchar('\n');
	return (0);
}
