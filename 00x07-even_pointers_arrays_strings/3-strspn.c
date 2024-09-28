#include "main.h"

/**
* _strspn - function that gets the lenght of a prefix substring
* @s : pointer to string
* @accept : ponter to other string
* Return: number of bytes in the initial segment of s which consist
*         only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int fd;
	char *ori;

	while (*s)
	{
		ori = accept;
		fd = 0;
		while (*ori)
		{
			if (*s == *ori)
			{
				fd = 1;
			}
			ori++;
		}
		if (fd)
			i++;
		else
			return (i);
		s++;
	}
	return (i);
}
