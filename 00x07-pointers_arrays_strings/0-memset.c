#include "main.h"

/**
* _memset - function that fills memory with a constant byte
* @s: pointer to memory erea.
* @b: constant byte to fill memory with.
* @n: numbers of bytes of the memory .
* Return: a ponter to memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *str = s;

	while (n--)
	{
		*str++ = b;
	}
	return (s);
}
