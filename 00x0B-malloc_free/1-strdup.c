#include "main.h"

/**
 * slen - function that tells the lenght of a string
 * @str : the string
 * Return: the lenght of the string
 */

int slen(char *str)
{
	int i = 0;

	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

/**
 * _strdup - a function that returns a pointer to a newly allocated
 *  space in memory (which contains a copy of the string in parametre)
 * @str : the string
 * Return: pointer to the duplicated string
 *	or NULL if str = NULL (or fail)
 */

char *_strdup(char *str)
{
	char *dup, *ori;

	if (str == NULL)
		return (NULL);
	ori = malloc(sizeof(char) * (slen(str) + 1));
	if (ori == NULL)
		return (NULL);
	dup = ori;
	while (*str)
	{
		*ori++ = *str++;
	}
	*ori = '\0';
	return (dup);
}
