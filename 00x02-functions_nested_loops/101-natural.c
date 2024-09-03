#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024.
* 	@s : sum
*	@n : number
*
* return : 0 (success)
*/

int	main(void)
{
	int	n;
	int	s;

	n = 0;
	s = 0;
	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
		n++;
	}
	printf("%d\n", s);
	return (0);
}
