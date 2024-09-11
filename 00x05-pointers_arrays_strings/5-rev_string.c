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


/**
 * rev_string -  function that reverses a string.
 * @s: string
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, j, l;
	char k;

	l = _strlen(s);
	i = l - 1;
	j = 0;
	while (j < i)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		j++;
		i--;
	}
}
