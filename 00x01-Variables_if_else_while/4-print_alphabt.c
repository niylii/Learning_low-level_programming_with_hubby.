#include <stdio.h>

/**
* main - entry point of the program.
* Return : always 0 (success)
*/

int	main()
{
	char	c;
	
	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		
	}
	putchar('\n');
	return (0);
}

