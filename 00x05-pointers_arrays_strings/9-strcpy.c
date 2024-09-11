#include "main.h"

/**
 * _strcpy -  function that copies the string
 * @dest: pointer that points to a buffer
 * @src: pointer that points to a string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
