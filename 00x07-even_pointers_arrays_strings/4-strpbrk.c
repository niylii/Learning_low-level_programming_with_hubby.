#include "main.h"
#include <stddef.h>

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s : string.
* @accept : string.
* Return: a pointer to the byte in s that matches one of the bytes in accept,
*         or NULL if no such byte is found
*	 NULL : if the character is not found
*/

char *_strpbrk(char *s, char *accept)
{
	char *aa;

	while (*s)
	{
		aa = accept;
		while (*aa)
		{
			if (*s == *aa)
			{
				return (s);
			}
			aa++;
		}
		s++;
	}
	if (*aa == '\0')
		return (s);
	return (NULL);
}
