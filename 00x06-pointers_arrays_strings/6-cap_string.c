#include "main.h"

/**
* cap_string -  function that capitalizes all words of a string.
* @str : string
* Return: a string
*/

char *cap_string(char *str)
{
	int i, capnxt = 1;
	char *pt = str;
	char sep[] = "\n	 ,;.!?\"(){}";

	while (*str)
	{
		if (capnxt && *str >= 'a' && *str <= 'z')
			*str -= 32;
		i = 0;
		while (sep[i])
		{
			if (*str == sep[i])
			{
				capnxt = 1;
				break;
			}
			else
				capnxt = 0;
			i++;
		}
		str++;
	}
	return (pt);
}
