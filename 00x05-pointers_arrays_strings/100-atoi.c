#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s : the string
 * Return: integer
 */

int _atoi(char *s)
{
	int si  = 1;
	unsigned int r = 0;

	if (*s == '+' || *s == ' ')
		s++;
	if (*s == '-')
	{
		si *= -1;
	}
	while (*s++)
	{
		if ((*s >= '0') && (*s <= '9'))
		{
			r = (r * 10) + (*s - '0');
		}
	}
	return (r * si);
}
