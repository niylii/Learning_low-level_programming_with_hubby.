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
 * str_concat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *con, *ori;

	if (s1 == NULL || s2 == NULL)
		return (0);
	ori = malloc(sizeof(char) * (slen(s1) + slen(s2) + 1));
	if (ori == NULL)
		return (NULL);
	con = ori;
	while (*s1)
	{
		*ori++ = *s1++;
	}
	while (*s2)
	{
		*ori++ = *s2++;
	}
	*ori = '\0';
	return (con);
}
