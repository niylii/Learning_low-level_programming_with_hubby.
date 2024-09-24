#include "main.h"

/**
* string_toupper - function that changes all lowercase letters
*  of a string to uppercase.
* @str : string
* Return: a string
*/

char *string_toupper(char *str)
{
	char *original = str;

	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original);
}
