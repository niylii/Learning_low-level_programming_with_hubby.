#include "main.h"

/**
* _strncpy - a function that copies string pointed to by src
* @dest : destination where the src is copied
* @src : source to copy
* @n : number of most copied bytes of src
* Return: a pointer to the resulting string
*/

char    *_strncpy(char *dest, char *src, int n)
{
	char *pt = dest;

	while (n-- > 0 && *src)
	{
		*dest++ = *src++;
	}
	while (n-- > 0)
		*dest++ = '\0';
	return (pt);
}
