#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest : destination where the src is appended
 * @src : source to append
 * @n : max number
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pt = dest;

	while (*dest)
		dest++;
	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (pt);
}
