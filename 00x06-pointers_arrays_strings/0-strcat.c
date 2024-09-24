#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest : destination where the src is appended
 * @src : source to append
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*dest)
		dest++;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (pt);
}
