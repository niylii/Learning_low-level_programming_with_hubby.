#include "main.h"

/**
*  number_of_2d - prints a number of two digits.
*  @t : the number
*  return : integer
*/

int	number_of_2d(int t)
{
	_putchar((t / 10) + '0');
	_putchar((t % 10) + '0');
	return (0);
}

/**
*  number_of_3d - prints a number of three digits.
*  @t : the number
*  return : integer
*/

int	number_of_3d(int t)
{
	_putchar((t / 100) + '0');
	_putchar(((t / 10) % 10) + '0');
	_putchar((t % 10) + '0');
	return (0);
}

/**
* separators - prints a comma and space,
* return : none.
*/

void	separators(void)
{
	_putchar(',');
	_putchar(' ');
}

/**
* print_times_table -  prints the n times table, starting with 0.
*  @t : result 
*  @n : n times
* Return : nothing .
*/

void	print_times_table(int n)
{
	int	i;
	int	j;
	int	t;

	if ((n > 15) || (n < 0))
		return ;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			t = i * j;
			if (j > 0)
			{
				separators();
				if (t < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (t < 100)
					_putchar(' ');
			}
			if (t < 10)
			{
				_putchar(t + '0');
			}
			else if (t < 100)
				number_of_2d(t);
			else
				number_of_3d(t);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
