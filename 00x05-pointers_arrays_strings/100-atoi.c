#include "main.h"

/**
 * signe - function to count the number of '-' signs.
 * @s: the string
 * Return: number of '-' signs
 */

int signe(char *s)
{
	int i = 0, j = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			j++;
		}
	i++;
	}
	return (j);
}

/**
 * _atoi - function that convert a string to an integer.
 * @s : the string
 * Return: integer
 */

int _atoi(char *s)
{
	int  si, ch = 0;
	unsigned int r = 0;

	si = signe(s);
	while (*s && !((*s >= '0') && (*s <= '9')))
	{
		s++;
	}
	while (*s)
	{
		if ((*s >= '0') && (*s <= '9'))
		{
			ch = 1;
			r = (r * 10) + (*s - '0');
		}
		else if (ch)
			break;
		s++;
	}
	if (si % 2 == 0)
		return (r);
	else
		return (-r);
}
