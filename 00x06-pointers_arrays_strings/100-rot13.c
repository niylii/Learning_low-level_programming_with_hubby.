#include "main.h"

/**
* rot13 -  function that encodes a string using rot13.
* @str : string
* Return: a string.
*/

char *rot13(char *str)
{
	char *ori = str;

	while (*str)
	{
		if ((*str >= 'a' && *str < 'n')
		|| (*str >= 'A' && *str < 'N'))
		{
			*str += 13;
		}
		else if ((*str >= 'n' && *str <= 'z')
		|| (*str >= 'N' && *str <= 'Z'))
		{
			*str -= 13;
		}
		str++;
	}
	return (ori);
}
