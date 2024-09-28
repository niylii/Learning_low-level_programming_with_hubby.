#include "main.h"

/**
* _memcpy - function that copies memory eres
* @dest : ponter to destination where you copy
* @src: ponter to source where you copy from
* @n: number of bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ori = dest;

	while (n--)
	{
		*ori++ = *src++;
	}
	return (dest);
}
