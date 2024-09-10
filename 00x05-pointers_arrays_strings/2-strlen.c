#include "main.h"

/**
 * _strlen - function that returns the lenght of a string.
 * @s: string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
